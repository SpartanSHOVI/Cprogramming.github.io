#include <stdio.h>

int main() {
    int age;
    float salary;

    printf("Enter age and salary: ");
    scanf("%d %f", &age, &salary);

    printf("Age = %d, Salary = %.2f\n", age, salary);
    return 0;
}

/*

4. Input & Output in C
    C provides standard functions to take input from the user and show output on the screen.

.

🔹 Standard I/O Functions
    | Function    | Purpose                  |
    | ----------- | ------------------------ |
    | `printf()`  | Print formatted output   |
    | `scanf()`   | Read formatted input     |
    | `getchar()` | Read a single character  |
    | `putchar()` | Print a single character |

🔹 printf() – Output Function
c
printf("format string", values);

Format Specifiers:
    | Type      | Format Code |
    | --------- | ----------- |
    | Integer   | `%d`        |
    | Float     | `%f`        |
    | Character | `%c`        |
    | String    | `%s`        |

Example:
c
int age = 20;
float pi = 3.14;
char grade = 'A';

printf("Age: %d\n", age);
printf("PI: %.2f\n", pi);  // 2 decimal places
printf("Grade: %c\n", grade);

🔹 scanf() – Input Function
c
scanf("format string", &variables);
note : & is used to give the address of the variable

Example:
c
int num;
float price;

scanf("%d", &num);
scanf("%f", &price);

🔹 Single Character I/O
c
char ch;

ch = getchar();     // Input one char
putchar(ch);        // Output one char

🔹 Escape Sequences
    | Code | Meaning      |
    | ---- | ------------ |
    | `\n` | New line     |
    | `\t` | Tab          |
    | `\\` | Backslash    |
    | `\"` | Double quote |

Example:
c
printf("Hello\tWorld\n");

*/