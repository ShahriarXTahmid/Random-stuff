#include <stdio.h>
int main()
{
    int i, j;
    int array[3][4] = {{1, 2, 3, 4}, {9, 10, 11, 12}, {10, 20, 30, 40}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}