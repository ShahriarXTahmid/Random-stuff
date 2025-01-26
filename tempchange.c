#include<stdio.h>
int main(void)
{
  float C, F;
  printf("Enter the temperature in celsius:");
  scanf("%f",&C);

  F=32+(9*C/5);
  printf("The temperature in Fahrenheit:%.2f", F);

    return 0;
}