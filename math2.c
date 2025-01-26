#include<stdio.h>
#include<math.h>
int main()
{
  double x, result;

  printf("Enter any fractional number = ");
  scanf("%lf",&x);

  result=ceil(x);

  printf("Value(%lf)=%.3lf\n",x ,result);

    return 0;
}
