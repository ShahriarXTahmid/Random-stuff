#include<stdio.h>
int main(void)
{
  double a, b;
  printf("Entr any two numbers = ");
  scanf("%lf %lf", &a, &b);

  if(a>b)
   {
    printf("%.2lf is the biggest number\n",a);
    printf("%.2lf is the smallest number/n", b);
   }

  else 
    {
        printf("%.2lf is the biggest number\n",b);
        printf("%.2lf is the smallest number\n",a);
    }

  return 0;  
}