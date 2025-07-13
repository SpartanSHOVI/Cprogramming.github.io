#include <stdio.h>

int add(int x, int y);  // function declaration

int main() {
    int a = 5, b = 7;
    int sum = add(a, b); // funtion call
    printf("Sum = %d\n", sum);
    return 0;
}

// function definition
int add(int x, int y) {
    return x + y;
}

/*

🔹 What is a Function?
    A function is a self-contained block of code that performs a specific task.

    🔸 Breaks a big program into smaller manageable parts
    🔸 Helps in code reusability and modularity

🔹 Types of Functions
    | Type                       | Example                         |
    | -------------------------- | ------------------------------- |
    | Standard Library Functions | `printf()`, `scanf()`, `sqrt()` |
    | User-defined Functions     | `int sum(int a, int b)`         |

🔹 Function Components
c
return_type function_name(parameters) {
    // body
    return value;
}

example:
c
int add(int a, int b) {
    return a + b;
}

🔹 Function Declaration (Prototype)
    Declare the function before main():
c
int add(int, int);

🔹 Function Call
    Invoke the function inside main() or another function:
c
int result = add(5, 3);

🔹 Passing Values to Functions
    Call by Value (Default)
c
void square(int x) {
    x = x * x;
}
    note: value is copies, so original value is not affected.

🔹 Returning Values from Functions
c
float simpleInterest(int p, int n, float r) {
    return (p * n * r) / 100;
}

🔹 Recursive Functions
    Function that calls itself.
c
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

*/