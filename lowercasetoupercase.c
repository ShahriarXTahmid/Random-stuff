#include<stdio.h>
int main()
{
   char lower;
   printf("Enter any lowercase letter :");
   scanf("%c",&lower);
   
   printf("The uppercase letter : %C", lower-32);


   return 0;
}

