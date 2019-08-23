#! /bin/bash
rm ./level3/*.c\.*
rm ./level31/*.c\.*
rm mysclp op1.s op2.s
make clean && make

for file in level3/*.c; do
	./sclp -d -compile "$file" > op1.s
	touch "$file.op"
	spim -f op1.s > "$file.op"
done

for file in level31/*.c; do
	./mysclp -d -compile "$file" > op2.s
	touch "$file.op"
	spim -f op2.s > "$file.op"
done

echo "OUT DIFFS================================================"
diff -x "*.xyz" ./level3 ./level31
