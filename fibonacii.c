// fibonacci
#include <stdio.h>
int main()
{
    int n, fibo, first = 0, second = 1, count = 0;

    printf("Enter n = ");
    scanf("%d", &n);

    while (count < n)
    {
        if (count <= 2)
        {
            fibo = count;
        }

        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("% d\t", fibo);
        count++;
    }
    return 0;
}