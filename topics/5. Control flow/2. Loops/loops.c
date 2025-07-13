/*

🔷 6.2 Looping Statements
    Used to repeat a block of code.

🔹 for Loop
    Most commonly used loop.
c
for (init; condition; update) {
    // code
}

example:
c
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}

🔹 while Loop
c
while (condition) {
    // executes while condition is true
}

example:
c
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}

🔹 do-while Loop
    Executes the loop at least once.
c
do {
    // code
} while (condition);

example:
c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 5);

🔹 Nested Loops
    A loop inside another loop.
c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 2; j++) {
        printf("i=%d, j=%d\n", i, j);
    }
}

*/