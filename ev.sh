#!/bin/bash
rm op1 op2
touch op1 op2

./sclp -d -compile "$1" > op1.s

#~/iplab/A4/sclp -d -eval "$1" &>> op1
./mysclp -d -compile "$1" > op2.s
#~/iplab/A4/mysclp -d -eval "$1" &>> op2
spim -f op1.s > op1
spim -f op2.s > op2
echo "diffs###################"
diff op1 op2
#diff op1.s op2.s

