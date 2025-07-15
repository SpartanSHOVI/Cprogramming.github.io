/*

🔹 goto
    Jumps to a labeled statement.

*/

#include <stdio.h>

int main() {
    int num = 5;

    if(num == 5) {
        goto end;       // jumps to label end
    }
    printf("You entered wrong number.");
    end:
    printf("You entered the correct number.");
    return 0;
}