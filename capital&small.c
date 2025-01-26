#include<stdio.h>
int main(void)
{
   char ch;
   printf("Enter any letter : ");
   scanf("%c",&ch);

   if (ch>='A' && ch<='Z'){
    printf("capital letter");
   }
   else if(ch>='a' && ch<='z'){
    printf("small letter");
   } 
   else{
    printf("invalid");
   }
  
    return 0;
}