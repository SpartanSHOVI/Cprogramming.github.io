#include <stdio.h>

int main() {
    int a = 5, b = 10;

    int max = (a > b) ? a : b;
    printf("Max = %d\n", max);

    int isEven = (a % 2 == 0) ? 1 : 0;
    printf("Is a even? %d\n", isEven);

    return 0;
}

/*

🔹 What is the Ternary Operator?
    The only ternary operator in C: ?:
    Used as a shorthand for simple if-else.

🔹 Syntax
c
(condition) ? value_if_true : value_if_false;

*/