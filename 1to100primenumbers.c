#include<stdio.h>
#include<math.h>
int main()
{
int num, count, start, end;

/*printf("Enter starting number and ending number : ");
scanf("%d %d", &start, &end);
*/
for(num=1; num<=100; num++){
    count=0;
if(num<=1){
    count=1;
}
else{
for(int i; i<= sqrt(num); i++){
    if(num%i==0){
        count=1;
        break;
    }
}
}
if(count==0){
    printf("%d is a prime numbwer\n",num);
}

}



return 0;

}