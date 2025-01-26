#include <stdio.h>
int main()
{
    int num[] = {1, 2, 3, 4, 5, 6};
    int value, pos = -1;
    printf("Enter a value in want to search = ");
    scanf("%d", &value);

    for (int i = 0; i < 6; i++)
    {
        if (value == num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Value not found!");
    }
    else
    {
        printf("The value is found at position %d ", pos);
    }
    return 0;
}