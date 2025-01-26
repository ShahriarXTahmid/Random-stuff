#include<stdio.h>
int main(void)
{
    double mark;
    printf("Enter your marks = ");
    scanf("%lf", &mark);

    if(mark>=33){
        printf("pass");
    }
    else {
        printf("fail!");
    }
    return 0;
}