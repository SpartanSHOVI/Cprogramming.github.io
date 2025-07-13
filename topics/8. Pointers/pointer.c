#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Address of a = %p\n", p);
    printf("Value at p = %d\n", *p);

    return 0;
}

/*

🔹 What is a Pointer?
    A pointer is a variable that stores the memory address of another variable.

🔹 Declaring a Pointer
c
int *ptr;        // pointer to int
float *fptr;     // pointer to float
char *chptr;     // pointer to char

note📌: The * indicates that it’s a pointer. 

🔹 Pointer Initialization
c
int a = 10;
int *p = &a;     // 'p' stores the address of 'a'

🔹 Accessing Values Using Pointers
    | Operator | Meaning                        | Example             |
    | -------- | ------------------------------ | ------------------- |
    | `&`      | Address of variable            | `&a`                |
    | `*`      | Value at address (dereference) | `*p` (value of `a`) |

*/