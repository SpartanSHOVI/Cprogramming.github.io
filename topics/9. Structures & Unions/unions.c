#include <stdio.h>

union Data {
    int i;
    float f;
    char str[10];
};

int main() {
    union Data d;

    d.i = 10;
    printf("int: %d\n", d.i);

    d.f = 3.14;
    printf("float: %.2f\n", d.f);

    d.i = 25;
    printf("new int: %d\n", d.i);  // Overwrites float

    return 0;
}

/*

🔷 10.2 Unions
    A union is like a structure, but it shares the same memory space for all members.
    Only one member can contain a value at any time.

🔹 Declaring a Union
c
union Data {
    int i;
    float f;
    char str[20];
};

🔹 Declaring Variables
c
union Data d1;

🔹 Accessing Union Members
    Same as structures (with . operator):
c
d1.i = 10;
printf("%d", d1.i);

note📌: ⚠ Overwriting happens:
c
d1.i = 10;
d1.f = 2.5;  // now 'i' value is lost

*/