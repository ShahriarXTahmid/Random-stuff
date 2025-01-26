#include<stdio.h>
int main(void)
{
  double a;
  printf("Enter any number = ");
  scanf("%lf",&a);

  if(a>0)
    printf("The number %.2lf is positive",a);
  else if(a<0)
    printf("The number %.2lf is negative",a);
  else 
    printf("The number is zero"); 
  return 0;
}