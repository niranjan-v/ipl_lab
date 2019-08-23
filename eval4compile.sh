#! /bin/bash
rm ./level4/*.c\.*
rm ./level41/*.c\.*
rm mysclp comp1_msg comp2_msg
make clean && make

for file in level4/*.c; do
	./sclp -compile "$file" &>> comp1_msg
done

for file in level41/*.c; do
	./mysclp -compile "$file" &>> comp2_msg
done

echo "COMPILATION DIFFS========================================"
diff comp1_msg comp2_msg

