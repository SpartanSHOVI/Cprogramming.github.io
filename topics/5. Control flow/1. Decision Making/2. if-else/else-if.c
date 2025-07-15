#include<stdio.h>

int main (){
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    
    if (age > 100) {
        printf("you doesnt exist congrats you died");
    }
    else if(age <= 100 && age > 18){
        printf("you are adult\n");
        printf("congtats you are free to what you do.\n");
    }
    else if(age >= 13 && age <= 18){
        printf("you are teenager\n");
    }

    else{
        printf("you are not adult\n");
        printf("study hard for your successive life.");
    }
    return 0;
}

/*
🔹 else if Ladder :

if (condition) {
    // true block
}
else if (condition) {
    // or true block
} else {
    // false block
}

*/