#include<stdio.h>
#include<ctype.h>
int main()
{
  char lower, upper;

  printf("Enter any lowercase letter : ");
  scanf("%c",&lower);

  upper = toupper(lower);
  printf("the uppercase letter is : %c",upper);
  return 0;
}