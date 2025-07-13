#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    printf("Length: %lu\n", strlen(str1));

    return 0;
}


/*

🔷 8.2 Strings in C
    A string is an array of characters ending with a null character '\0'.

🔹 Declaring and Initializing Strings
c
char name[10] = "Alice";
char city[] = {'D', 'e', 'l', 'h', 'i', '\0'};

[note📌: name[0] == 'A', city[5] == '\0' ]

🔹 Common String Functions (from <string.h>)
    | Function         | Purpose                           |
    | ---------------- | --------------------------------- |
    | `strlen(s)`      | Length of string (excluding `\0`) |
    | `strcpy(d, s)`   | Copy string `s` to `d`            |
    | `strcat(d, s)`   | Concatenate `s` to `d`            |
    | `strcmp(s1, s2)` | Compare two strings               |

🔹 Reading Strings with Spaces
Use fgets() instead of scanf() for strings with spaces.
c
char fullName[50];
printf("Enter full name: ");
fgets(fullName, sizeof(fullName), stdin);



*/