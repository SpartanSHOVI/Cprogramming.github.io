
// 🔹 Pointer to Pointer

#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;
    int **pp = &p;

    printf("%d", **pp);  // prints 5
    return 0;
}