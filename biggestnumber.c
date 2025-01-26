#include<stdio.h>
int main(void)
{
  double num1, num2, num3;
  printf("Enter three numbers = ");
  scanf("%lf %lf %lf", &num1, &num2, &num3);

  if(num1>num2 && num1>num3)
    printf("the biggest number is %lf", num1);
  

  else if(num2>num1 && num2>num3)
    printf("the biggest number is %lf", num2);
  

  else if(num3>num1 && num3>num2)
    printf("the biggest number is %lf", num3);
  

  else
    printf("The numbers are equal");
  
    return 0;
}