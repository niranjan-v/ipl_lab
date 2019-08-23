#! /bin/bash
rm ./level2/*.c\.*
rm ./level21/*.c\.*
rm mysclp comp1_msg comp2_msg
make clean && make

for file in level2/*.c; do
	./sclp -icode -compile "$file" &>> comp1_msg
done

for file in level21/*.c; do
	./mysclp -icode -compile "$file" &>> comp2_msg
done

sed -e s/level2//g -i comp1_msg

sed -e s/level21//g -i comp2_msg

echo "COMPILATION DIFFS========================================"
diff comp1_msg comp2_msg

echo "TOK DIFFS================================================"
diff -x '*.xyz' -w ./level2 ./level21
