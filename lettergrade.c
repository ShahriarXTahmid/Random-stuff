#include<stdio.h>
int main(void)
{
    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if(marks<0 || marks>100){
        printf("Invalid marks");
    }

    else if(marks>=80 && marks<=100){
        printf("You have got and A+");
    }

    else if(marks>=70 && marks<=79){
        printf("You have got and A");
    }

    else if(marks>=60 && marks<=69){
        printf("You have got and A-");
    }

    else if(marks>=50 && marks<=59){
        printf("You have got a B");
    }
    else if(marks>=40 && marks<=49){
        printf("You have got a C");
    }

    else if(marks>=33 && marks<=39){
        printf("You have got a D");
    }

    else{
        printf("You have FAILED");
    }
    return 0;
}