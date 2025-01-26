#include <stdio.h>
int main()
{
    int num, temp, sum = 0, r;
    printf("Enter any number : ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("The sum of the digits of %d = %d", num, sum);
    return 0;
}