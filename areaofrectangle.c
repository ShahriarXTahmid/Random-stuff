#include<stdio.h>
int main(void)
{
  int length, width, area;
  printf("Enter the Length & Width of the Rectangle : ");
  scanf("%d %d", &length, &width);
  
  area= length*width;
  printf("The Area of the Rectangle : %d", area);
    return 0;
}