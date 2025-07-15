#include <stdio.h>

int main(){
    int i = 0;              // initialization
    do{
        printf("%d", i);
        i++;                // update
    }
    while(i < 5);           // condition
    return 0;
}