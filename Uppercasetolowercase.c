#include<stdio.h>
int main()
{
   char upper;
   printf("Enter any uppercase letter :");
   scanf("%c",&upper);

   printf("The lowercase letter : %C", upper+32);


    return 0;
}