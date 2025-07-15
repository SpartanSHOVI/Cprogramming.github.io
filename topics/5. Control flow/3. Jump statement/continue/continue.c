/*

🔹 continue
    Skips current iteration and jumps to next.

*/

#include <stdio.h>

int main(){
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        printf("%d ", i);
    }
    return 0;
}