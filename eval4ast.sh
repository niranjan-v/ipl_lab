#! /bin/bash
rm ./level4/*.c\.*
rm ./level41/*.c\.*
rm mysclp comp1_msg comp2_msg
make clean && make

for file in level4/*.c; do
	./sclp -ast "$file" &>> comp1_msg
done

for file in level41/*.c; do
	./mysclp -ast "$file" &>> comp2_msg
done

sed -e s/level4//g -i comp1_msg

sed -e s/level41//g -i comp2_msg

echo "COMPILATION DIFFS========================================"
diff comp1_msg comp2_msg

echo "TOK DIFFS================================================"
diff -x '*.spim' -x '*.sym' -w ./level4 ./level41
