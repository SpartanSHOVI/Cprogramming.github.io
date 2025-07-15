/* Demonstration of if statement */ 
#include<stdio.h>

int main(){ 
    int  m1, m2, m3, m4, m5, per;

    printf("Enter marks in five subjects ") ;
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    per = ( m1 + m2 + m3 + m4 + m5 ) / 5;

    if(per >= 60){
        printf("First Division");
    }
    if((per >= 50)&&(per < 60)){ // && is Logical AND operator and || is Logical OR operator
        printf("Second Division");
    }
    if((per >= 40)&&(per < 50)){
        printf("Third Division");
    }
    if(per < 40){
        printf("Fail");
    }
    return 0;
}

/*

if (condition) {
    // executes if condition is true
}

*/
