// 1 x 2 x 3 x....x N
#include<stdio.h>
int main()
{
    int n, prod = 1;
    printf("Enter n = ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 1)
    {
        prod = prod * i;
    }
    printf("%d", prod);
    return 0;
}