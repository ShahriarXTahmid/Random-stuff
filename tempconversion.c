#include <stdio.h>
int main()
{
    int opt;

    printf("Temperature conversion menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Choose requried option : ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
    {
        int f, c;
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%d", &f);
        c = (5 * f - 160) / 9;
        printf("%d Fahrenheit = %d Celcius", f, c);
        break;
    }

    case 2:
    {
        int f, c;
        printf("Enter the temperature in Celsius: ");
        scanf("%d", &c);
        f = 32 + ((9 * c) / 5);
        printf("%d Celsius = %d Fahrenheit", c, f);
        break;
    }

    default:
    {
        printf("Not a valid option");
    }
    }

    return 0;
}