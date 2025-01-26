#include<stdio.h>
#include<math.h>
int main()
{
  double x, result;

  printf("Enter any number = ");
  scanf("%lf", &x);

  result=exp(x);

  printf("Exp(%lf)=%.3lf\n",x ,result);

    return 0;
}