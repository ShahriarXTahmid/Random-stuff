#include <stdio.h>
int main()
{
    int num1, num2, n1, n2, rem, GCD, LCM;

    printf("Enter two integer number : ");
    scanf("%d %d", &num1, &num2);
    n1 = num1;
    n2 = num2;

    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    GCD = n1;
    LCM = (num1 * num2) / GCD;
    printf("GCD & LCM of %d and %d is %d, %d", num1, num2, GCD, LCM);
    return 0;
}
