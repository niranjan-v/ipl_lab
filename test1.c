int m;

int myfn(int x){
	return x;
}
int f(int n){
	int ret, k;
	if(n == 0){
		ret =1;
		return ret;
	}
	k = n-1;
	// ret = f(k);
	ret = n*ret;
	return ret;
}

void main(){
	int a;
	int b;

	b=5; a=1;
    b=f(b>1?a:a+1);
	// a = f(b);
	// print a;
}
