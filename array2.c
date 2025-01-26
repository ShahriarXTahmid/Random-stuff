#include <stdio.h>
int main()
{
    int sum = 0, a[10];

    for (int i = 0; i <= 9; i++)
    {
        printf("Enter the value of a[%d] = \n", i);
        scanf("%d", &a[i]);

        sum = sum + a[i];
        printf("Sum = %d", sum);
    }

    return 0;
}