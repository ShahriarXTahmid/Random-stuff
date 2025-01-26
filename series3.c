#include <stdio.h>
int main()
{
    double n, sum = 0;
    printf("Enter n = ");
    scanf("%lf", &n);

    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + (1/i);
    }
    printf("%.2lf", sum);
    return 0;
}