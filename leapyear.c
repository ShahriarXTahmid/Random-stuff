#include<stdio.h>
int main(void)
{
  int y;
  printf("Year = ");
  scanf("%d",&y);



  if (y%400==0){
    printf("%d is a leap year", y);
  }

  if (y%4==0 && y%100!=0){
    printf("%d is a leap year", y);
  }
  
  else{
    printf("%d is not a leap year",y);
  }
    return 0;
}