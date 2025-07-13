#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

void display(struct Student s) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {101, "Alice", 91.5};
    display(s1);
    return 0;
}

/*

🔷 10.1 Structures
    A structure allows you to combine variables of different data types under one name.

🔹 Declaring a Structure 
c
struct Student {
    int roll;
    char name[20];
    float marks;
};

🔹 Declaring Structure Variables
c
struct Student s1;              // Single variable
struct Student s2 = {101, "Rahul", 89.5};  // Initialization

🔹 Accessing Members
    Use the dot (.) operator:
c
printf("%d", s1.roll);
scanf("%f", &s1.marks);

🔹 Array of Structures
c
struct Student list[3];

🔹 Structures with Functions
    1. Pass structure by value:
c
void display(struct Student s) {
    printf("%s", s.name);
}
    2. Or pass by reference (efficient):
c
void modify(struct Student *s) {
    s->marks += 5;  // using arrow operator
}

*/