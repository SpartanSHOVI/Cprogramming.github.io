#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Addition: %d\n", a + b);
    printf("Greater: %d\n", a > b);
    printf("AND logic: %d\n", (a > 0 && b > 0));
    printf("Bitwise OR: %d\n", a | b);
    printf("Left shift: %d\n", a << 1);

    return 0;
}

/*

🔹 What are Binary Operators?
    Operators that operate on two operands.

🔹 Types of Binary Operators
✅ Arithmetic
c
+, -, *, /, %

✅ Relational
c
==, !=, >, <, >=, <=

✅ Logical
c
&&, ||

✅ Bitwise
c
&, |, ^, <<, >>

✅ Assignment
c
=, +=, -=, *=, /=, %=

*/