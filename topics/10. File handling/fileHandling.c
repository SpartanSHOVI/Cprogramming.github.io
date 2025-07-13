#include <stdio.h>

int main() {
    FILE *fp;
    char name[30];

    // Write to file
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("File can't be opened.\n");
        return 1;
    }
    fprintf(fp, "Alice\nBob\nCharlie\n");
    fclose(fp);

    // Read from file
    fp = fopen("student.txt", "r");
    printf("Student list:\n");
    while (fgets(name, sizeof(name), fp)) {
        printf("%s", name);
    }
    fclose(fp);

    return 0;
}

/*

🔷 File Handling Basics
    C uses a special pointer of type FILE (defined in <stdio.h>) to handle files.
    It allows you to store and retrieve data permanently using files like .txt, .csv, etc.

🔹 Steps in File Handling
    1.Declare a file pointer
    2.Open the file using fopen()
    3.Read/Write using functions like fprintf(), fscanf(), fgets(), etc.
    4.Close the file with fclose()

🔷 File Opening Modes
    | Mode   | Meaning                    |
    | ------ | -------------------------- |
    | `"r"`  | Read                       |
    | `"w"`  | Write (create/overwrite)   |
    | `"a"`  | Append                     |
    | `"r+"` | Read and write             |
    | `"w+"` | Read and write (overwrite) |
    | `"a+"` | Read and append            |

🔹 Declaring and Opening a File
c
FILE *fp;
fp = fopen("data.txt", "r");

note📌: Always check if file opened successfully:
c
if (fp == NULL) {
    printf("File can't be opened!\n");
    return 1;
}

🔷 Writing to a File
c
FILE *fp = fopen("output.txt", "w");
fprintf(fp, "Hello, file!\n");
fclose(fp);

🔷 Reading from a File
c
FILE *fp = fopen("output.txt", "r");
char ch;

while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
}
fclose(fp);

🔷 Other Common Functions
    | Function       | Purpose               |
    | -------------- | --------------------- |
    | `fgetc(fp)`    | Reads one character   |
    | `fgets()`      | Reads a string (line) |
    | `fputc(ch,fp)` | Writes one character  |
    | `fputs()`      | Writes a string       |
    | `fscanf()`     | Reads formatted data  |
    | `fprintf()`    | Writes formatted data |
    | `feof(fp)`     | Checks end of file    |

*/