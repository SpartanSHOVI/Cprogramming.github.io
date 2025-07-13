/*

🔷 6.3 Jump Statements
    Used to alter the flow of execution.

🔹 break
    Exits a loop or switch immediately.
c
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    printf("%d ", i);
}

🔹 continue
    Skips current iteration and jumps to next.
c
for (int i = 0; i < 5; i++) {
    if (i == 2) continue;
    printf("%d ", i);
}

🔹 goto
    Jumps to a labeled statement.
c
goto label;
...
label:
printf("Jumped here!");

🔹 return
    Used to exit from a function (with or without value).
c
return;       // no value
return 0;     // return int

*/