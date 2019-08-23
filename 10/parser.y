%{
#include <stdio.h>
#include <string>
#include <iostream>
extern "C" {	
	void yyerror (char *);
}
extern int yylex(void);
extern int yylineno;

Table_Scope current = global;
ostream & os = cout;
list<Symbol_Table_Entry*> all_symbols;
%}

%union YYSTYPE
{
	int integer_value;
	double double_value;
	std::string * string_value;
	list<Ast *> * ast_list;
	Ast * ast;
	Symbol_Table * symbol_table;
	Symbol_Table_Entry * symbol_entry;
	Basic_Block * basic_block;
	Procedure * procedure;
	Program * program;
	Data_Type * data_type;
	vector<string> * vec_string;
	list<Symbol_Table_Entry*> * list_sym;
	Sequence_Ast * seq_ast;
	Selection_Statement_Ast * sel_ast;
	
}

%token INTEGER_NUMBER BBNUM INTEGER DOUBLE_NUMBER NAME RETURN FLOAT ASSIGN VOID UMINUS WHILE IF ELSE DO GREATER_THAN GREATER_THAN_EQUAL LESS_THAN LESS_THAN_EQUAL EQUAL NOT_EQUAL AND OR NOT PRINT

%right ASSIGN
%right '?' ':'
%left GREATER_THAN GREATER_THAN_EQUAL LESS_THAN LESS_THAN_EQUAL EQUAL NOT_EQUAL
%left '+' '-' 
%left '*' '/'
%left AND OR
%right UMINUS
%nonassoc IFST
%nonassoc ELSE
%nonassoc NOT

%type <integer_value> INTEGER_NUMBER
%type <double_value> DOUBLE_NUMBER
%type <string_value> NAME
%type <procedure> Proc
%type <ast_list> ProcBody
%type <ast> AssignExp Variable Constant E iteration_stmt conditional_expr rel_expr logical_expr sequence print_stmt
%type <sel_ast> selection_stmt
%type <symbol_table> Global
%type <vec_string > L
%type <list_sym > D
%type <data_type> T
%type <program> Prog
%type <string_value> NAME1

%%
Prog : Global Proc {
		$$ = new Program();
		$1->set_table_scope(global);
		$$->set_global_table(*$1);
		$$->set_procedure($2,yylineno); 
		program_object = *$$;
	};
Global : {$$ = new Symbol_Table();$$->set_table_scope(current);
       //$$->set_start_offset_of_first_symbol(0);
       //$$->assign_offsets();
       current = local;
       } 
	| Global D {
		$$ = $1;
		for(list<Symbol_Table_Entry*>::iterator it = $2->begin(); it != $2->end() ; ++it){
			(*it)->set_symbol_scope($1->get_table_scope());
			$$->push_symbol(*it);
			all_symbols.push_back(*it);
		}
        //$$->assign_offsets();
	} ;

Proc : T NAME '(' ')' '{' Global ProcBody '}' {
		$$ = new Procedure(*$1,*$2,yylineno);
		$$->set_ast_list(*$7);
		$6->set_table_scope(local);
		$$->set_local_list(*$6);
	};
ProcBody : {$$ = new list<Ast*>();} 
	| ProcBody AssignExp {
		$$ = $1;
		$$->push_back($2);
	} 
	| ProcBody selection_stmt {
		$$ = $1;
		$$->push_back($2);
	}
	| ProcBody iteration_stmt {
		$$ = $1;
		$$->push_back($2);
	}
	| ProcBody print_stmt{
		$$ = $1;
		$$->push_back($2);
	}
	| ProcBody sequence {
		$$ = $1;
		$$->push_back($2);		
	}
	;

print_stmt: PRINT Variable ';'{
	$$=new Print_Ast($2, yylineno);
}

sequence : //{$$ = new Sequence_Ast(yylineno);} |
	 '{' ProcBody '}' {
		if ($2->empty()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Block of statements cannot be empty ", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			Sequence_Ast* temp = new Sequence_Ast(yylineno);//check this!!!!!!
			for (list<Ast*>::iterator it = $2->begin(); it != $2->end() ; ++it){
				temp->ast_push_back(*it);
			}
			$$ = temp;
		}
	}
	| AssignExp {
		$$ = $1;
	}
	| selection_stmt {
		$$ = $1;
	}
	| iteration_stmt {
		$$ = $1;
	}
	;

selection_stmt : IF '(' logical_expr ')' sequence ELSE sequence {
		$$ = new Selection_Statement_Ast($3,$5,$7,yylineno);
	}
	| IF '(' logical_expr ')' sequence %prec IFST {
		$$ = new Selection_Statement_Ast($3,$5,NULL,yylineno);
	}
	;

iteration_stmt : WHILE '(' logical_expr ')' sequence {
		$$ = new Iteration_Statement_Ast($3, $5, yylineno, false);
	}
	| DO sequence WHILE '(' logical_expr ')' ';'{
		$$ = new Iteration_Statement_Ast($5, $2, yylineno, true);
	}
	;

conditional_expr : logical_expr '?' E ':' E {
		if ($3->get_data_type() != $5->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d :  Conditional statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		$$ = new Conditional_Expression_Ast($1,$3,$5,yylineno);	
		$$->set_data_type($3->get_data_type());
	}
	;

rel_expr : E GREATER_THAN E {
		if($1->get_data_type() != $3->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			$$ = new Relational_Expr_Ast($1,greater_than,$3,yylineno);
		}
	}
	| E GREATER_THAN_EQUAL E {
		if($1->get_data_type() != $3->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			$$ = new Relational_Expr_Ast($1,greater_equalto,$3,yylineno);
		}
		
	}
	| E LESS_THAN E {
		if($1->get_data_type() != $3->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			$$ = new Relational_Expr_Ast($1,less_than,$3,yylineno);
		}
		
	}
	| E LESS_THAN_EQUAL E {
		if($1->get_data_type() != $3->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			$$ = new Relational_Expr_Ast($1,less_equalto,$3,yylineno);
		}
		
	}
	| E EQUAL E {
		if($1->get_data_type() != $3->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			$$ = new Relational_Expr_Ast($1,equalto,$3,yylineno);
		}
		
	}
	| E NOT_EQUAL E {
		if($1->get_data_type() != $3->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Relational statement data type not compatible", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			$$ = new Relational_Expr_Ast($1,not_equalto,$3,yylineno);
		}
		
	}

	;
logical_expr : rel_expr {
		$$ = $1;
	}
	| '(' logical_expr ')' {
		$$ = $2;
	} 
	| logical_expr AND logical_expr {
		$$ = new Logical_Expr_Ast($1,_logical_and,$3,yylineno);
	}
	| logical_expr OR logical_expr {
		$$ = new Logical_Expr_Ast($1,_logical_or,$3,yylineno);
	}
	| NOT logical_expr {
		$$ = new Logical_Expr_Ast(NULL,_logical_not,$2,yylineno);
	}
	;


D : T L ';'{
		$$ = new list<Symbol_Table_Entry*>();
		for(int i = 0; i < $2->size(); i++){
			$$->push_back(new Symbol_Table_Entry((*$2)[i],*$1,yylineno));
		}
	}
	;

T : INTEGER {
		$$ = new Data_Type;
		*$$ = int_data_type;
	} 
	| FLOAT {
		$$ = new Data_Type;
		*$$ = double_data_type;
	} 
	| VOID {
		$$ = new Data_Type;		
		*$$ = void_data_type;
	} ;

NAME1 : NAME {
		string * name_str = $1;
		(*name_str).append("_");
		$$ = name_str;
	};

L : NAME1 {	
		$$ = new vector<string>();
		$$->push_back(*$1);
	} 
	| L ',' NAME1 {
		$$ = $1;
		$$->push_back(*$3); 
	} ;

Variable : NAME1 {		
		
		Symbol_Table_Entry * entry;
		int found = 0; 
		for(list<Symbol_Table_Entry*>::iterator it = all_symbols.begin(); it != all_symbols.end() ; ++it){
			string var_name = (*it)->get_variable_name();
			if(var_name.compare(*$1) == 0) { found = 1; entry = *it;}	
		}
		if(found == 1) $$ = new Name_Ast(*$1,*entry,yylineno);
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Variable has not been declared", yylineno);
			yyerror(numstr);
			exit(0);
		}
	};
Constant : INTEGER_NUMBER {
		$$ = new Number_Ast<int>($1,int_data_type,yylineno);
	} 
	| DOUBLE_NUMBER {
		$$ = new Number_Ast<double>($1,double_data_type,yylineno);	
	} ;
AssignExp : Variable ASSIGN E ';' {
		if($1->get_data_type() != $3->get_data_type()){
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Assignment type mismatch", yylineno);
			yyerror(numstr);
			exit(0);
		}
		else {
			$$ = new Assignment_Ast($1,$3,yylineno);
		}
	} 
	;
E : Constant {
		$$ = $1;
	}
	| Variable {
		$$ = $1;
	}
    	| conditional_expr{
		$$=$1;
    	}
	| '(' E ')' {
		$$ = $2;
	}
	| E '+' E {
		$$ = new Plus_Ast($1,$3,yylineno);
		Data_Type dt1 = $1->get_data_type();
		Data_Type dt2 = $3->get_data_type();
		if(dt1 == dt2){
			$$->set_data_type(dt1);	
		}
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);		
		}
	}
	| E '-' E {
		$$ = new Minus_Ast($1,$3,yylineno);
		Data_Type dt1 = $1->get_data_type();
		Data_Type dt2 = $3->get_data_type();
		if(dt1 == dt2){
			$$->set_data_type(dt1);	
		}
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);		
		}
	}
	| E '/' E {
		$$ = new Divide_Ast($1,$3,yylineno);
		Data_Type dt1 = $1->get_data_type();
		Data_Type dt2 = $3->get_data_type();
		if(dt1 == dt2){
			$$->set_data_type(dt1);	
		}	
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error: syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);	
		}	
	}
	| E '*' E {
		$$ = new Mult_Ast($1,$3,yylineno);
		Data_Type dt1 = $1->get_data_type();
		Data_Type dt2 = $3->get_data_type();
		if(dt1 == dt2){
			$$->set_data_type(dt1);	
		}
		else {
			char numstr[100];
			sprintf(numstr,"cs316: Error : syntax error in line %d : Arithmetic type mismatch", yylineno);
			yyerror(numstr);
			exit(0);
		}
	}
	| '-' E %prec UMINUS {
		Data_Type dt = $2->get_data_type();
		$$ = new UMinus_Ast($2,NULL,yylineno);
		$$->set_data_type(dt);
	} 
	;

 
