#include <stdio.h>

int main() {
    int a = 5;
    printf("Unary plus: %d\n", +a);
    printf("Unary minus: %d\n", -a);
    printf("Pre-increment: %d\n", ++a);
    printf("Post-decrement: %d\n", a--);
    printf("Logical NOT: %d\n", !a);
    printf("Size of int: %lu\n", sizeof(a));

    return 0;
}

/*

🔹 What are Unary Operators?
Operators that operate on a single operand.

🔹 Common Unary Operators
    | Operator | Meaning                | Example      |
    | -------- | ---------------------- | ------------ |
    | `+`      | Unary plus             | `+a`         |
    | `-`      | Unary minus (negation) | `-a`         |
    | `++`     | Increment (pre/post)   | `++a`, `a++` |
    | `--`     | Decrement (pre/post)   | `--a`, `a--` |
    | `!`      | Logical NOT            | `!a`         |
    | `~`      | Bitwise NOT (1’s comp) | `~a`         |
    | `&`      | Address of             | `&a`         |
    | `*`      | Dereference pointer    | `*ptr`       |
    | `sizeof` | Memory size of operand | `sizeof(a)`  |

*/