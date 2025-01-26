#include <stdio.h>
int main()
{
    int initialnum, finalnum, sum = 0, r, temp;

    printf("Enter an initial number : ");
    scanf("%d", &initialnum);

    printf("Enter a final number : ");
    scanf("%d", &finalnum);

    for (int i = initialnum; i <= finalnum; i++)
    {
        temp = i;

        while (temp != 0)
        {
            r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }
        if (i == sum)
        {
            printf("%d\t", i);
        }
        sum = 0;
    }

    return 0;
}