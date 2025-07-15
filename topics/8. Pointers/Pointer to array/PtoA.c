
// 🔹 Pointers and Arrays

#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30};   // note📌: arr[i] == *(arr + i)
    int *p = arr;

    printf("%d", *(p + 1));     // prints 20
}

