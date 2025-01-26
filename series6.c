//1-2+3-4+.....+n
#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0;

    printf("Enter the last number = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
    }
    printf("Sum = %d", odd - even);
    return 0;
}