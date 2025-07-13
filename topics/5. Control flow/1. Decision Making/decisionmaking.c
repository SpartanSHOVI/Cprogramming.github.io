/*

🔷 6.1 Decision-Making Statements
    Used to execute code based on a condition.

🔹 if Statement
c
if (condition) {
    // executes if condition is true
}

example:
c
int age = 18;
if (age >= 18) {
    printf("You are eligible to vote.\n");
}

🔹 if-else Statement
c
if (condition) {
    // true block
} else {
    // false block
}

example:
c
int num = 5;
if (num % 2 == 0) {
    printf("Even\n");
} else {
    printf("Odd\n");
}

🔹 else if Ladder
c
if (score >= 90) {
    printf("A");
} else if (score >= 80) {
    printf("B");
} else {
    printf("C");
}

🔹 switch Statement
    Used to select one of many code blocks.
c
switch (expression) {
    case value1: statements; break;
    case value2: statements; break;
    ...
    default: statements;
}

example:
c
int day = 2;
switch(day) {
    case 1: printf("Mon"); break;
    case 2: printf("Tue"); break;
    default: printf("Invalid");
}

*/