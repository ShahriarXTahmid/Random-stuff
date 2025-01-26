#include<stdio.h>
#include<ctype.h>
int main()
{
  char upper, lower;

  printf("Enter any uppercase letter : ");
  scanf("%c",&upper);

  lower= tolower(upper);
  printf("The uppercase letter is : %c", lower);

   return 0; 
}