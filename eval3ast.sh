#! /bin/bash
rm ./level3/*.c\.*
rm ./level31/*.c\.*
rm mysclp comp1_msg comp2_msg
make clean && make

for file in level3/*.c; do
	./sclp -ast -symtab "$file" &>> comp1_msg
done

for file in level31/*.c; do
	./mysclp -ast -symtab "$file" &>> comp2_msg
done

sed -e s/level3//g -i comp1_msg

sed -e s/level31//g -i comp2_msg

echo "COMPILATION DIFFS========================================"
diff comp1_msg comp2_msg

echo "TOK DIFFS================================================"
diff -x '*.spim' -x '*.sym' -w ./level3 ./level31
