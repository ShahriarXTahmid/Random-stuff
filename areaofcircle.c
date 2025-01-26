#include<stdio.h>
int main(void)
{
  float radius, area;
  printf("Enter the radius :");
  scanf("%f", &radius);

  area= 3.1416*radius*radius;
  printf("The Area of the circle is : %lf", area);

   return 0; 
}