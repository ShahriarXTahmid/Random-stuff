#include <stdio.h>
#include <math.h>
int main()
{
    int num, count = 0;

    printf("Enter any  number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        count = 1;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}