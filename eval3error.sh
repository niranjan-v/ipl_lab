#! /bin/bash
rm ./level3error/*.c\.*
rm ./level31error/*.c\.*
rm mysclp comp1_msg comp2_msg
make clean && make

for file in level3error/*.c; do
	./sclp -compile "$file" &>> comp1_msg
done

for file in level31error/*.c; do
	./mysclp -compile "$file" &>> comp2_msg
done

echo "COMPILATION DIFFS========================================"
diff comp1_msg comp2_msg

