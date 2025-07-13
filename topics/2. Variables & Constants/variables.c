#include <stdio.h>

int main() {
    int a = 5;
    float b = 6.2;
    char ch = 'Z';

    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("ch = %c\n", ch);

    return 0;
}


/*

🔹 What is a Variable?
A variable is a named memory location used to store a value that can change during program execution.

🔹 Rules for Naming Variables
    Must begin with a letter or an underscore (_)

    Can include letters, digits, and underscores

    Case-sensitive (Count ≠ count)

    Cannot use keywords like int, float, return

    Max length: 31 characters (portable limit)

🔹 Declaring Variables
    int a;
    float rate;
    char grade;

also as
    int a = 10;
    float rate = 8.5;

and multiple declaration as
    int x = 1, y = 2, z = 3;

*/
