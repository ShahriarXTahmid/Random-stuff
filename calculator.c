#include <stdio.h>
int main(void)
{
    double num1, num2;
    char op;
    printf("Enter Operator (+,-,*,/) :");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
    case '+':
    {
        printf("%lf + %lf = %lf", num1, num2, num1 + num2);
        break;
    }
    case '-':
    {
        printf("%lf - %lf = %lf", num1, num2, num1 - num2);
        break;
    }
    case '*':
    {
        printf("%lf * %lf = %lf", num1, num2, num1 * num2);
        break;
    }
    case '/':
    {
        printf("%lf / %lf = %lf", num1, num2, num1 / num2);
        break;
    }
    default:
    {
        printf("Inavlid operator!");
    }
    }

    return 0;
}