#include <stdio.h>
int main()
{
    int array1[5] = {10, 20, 30, 40}, array2[5], i;
    printf("Arrray 1 = ");

    for (i = 0; i < 4; i++)
    {
        printf("%d ", array1[i]);
    }

    for (i = 0; i < 4; i++)
    {
        array2[i] = array1[i];
    }
    printf("Arrray 2 = ");

    for (i = 0; i < 4; i++)
    {
        printf("%d ", array2[i]);
    }
    return 0;
}