#include<stdio.h>
int main ()
{ 
  float base, height, area;

  printf("Enter the base & height of the triangle :");
  scanf("%f %f", &base, &height);

  area=(float)1/2 * base * height;
  printf("The area of the triangle : %.2f", area);
    return 0;
}