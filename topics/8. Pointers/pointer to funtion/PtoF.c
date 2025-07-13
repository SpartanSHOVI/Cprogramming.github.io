/*

🔹 Pointers with Functions
    1. Call by Value
c
void change(int x) {
    x = 50;
}

    2. Call by Reference (using pointers)
c
void change(int *x) {
    *x = 50;
}

example:
c
int num = 10;
change(&num);


*/