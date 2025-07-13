#include <stdio.h>
#define RATE 5.5

int main() {
    const int year = 2025;
    float si;
    int p = 1000, n = 2;

    si = p * n * RATE / 100;

    printf("Simple Interest = %f in year %d", si, year);
    return 0;
}


/*

🔹 What is a Constant?
A constant is a value that does not change during the execution of the program.

🔹 Types of Constants
✅ 1. Integer Constants
    Whole numbers with no decimal
    Ex: 100, -25, 0
c
int x = 123;

✅ 2. Floating-point Constants
    Decimal numbers
    Ex: 3.14, -0.55, 2.5e2 (Exponential form)
c
float pi = 3.14;

✅ 3. Character Constants
    Single characters enclosed in single quotes ' '
    Ex: 'A', '5', '@'
c
char grade = 'A';

✅ 4. String Constants
    Enclosed in double quotes " "
    Ex: "Hello", "123"
c
printf("Hello, world!");

✅ 5. Symbolic Constants
    Defined using #define preprocessor directive
c
#define PI 3.14
#define MAX 100

int area = PI * r * r;

✅ 6. const Keyword
    Makes a variable constant (value cannot be changed)
c
const int size = 10;

*/