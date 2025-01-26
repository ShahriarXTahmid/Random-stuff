#include<stdio.h>
int main(void)
{
   int num1, num2, sum, sub, multi, div, rem;
   float avg;

   printf("Enter two integer numbers :");
   scanf("%d%d",&num1,&num2);

   sum=num1+num2;
   printf("The total sum of given numbers : %d\n",sum);

   sub=num1-num2;
   printf("The substraction of given numbers : %d\n",sub);

   multi=num1*num2;
   printf("The multiplication of given numbers : %d\n",multi);

   div=num1/num2;
   printf("The division of given numbers : %d\n",div);

   rem=num1%num2;
   printf("The remider of given numbers : %d\n",rem);

   avg=(float)sum/2; //type casting
   printf("The average of given numbers : %.2f",avg);

    return 0;
}