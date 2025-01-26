#include <stdio.h>
int main()
{
    int first[10][10], second[10][10], multi[10][10], r1, r2, c1, c2;

    printf("Enter rows and columns for first matrix = ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix = ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error!! Column or first matrix is not equal to row of second matrix\n\n ");

        printf("Enter rows and columns for first matrix = ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and columns for second matrix = ");
        scanf("%d %d", &r2, &c2);
    }

    // first matrix

    printf("first matrix =\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Frist [%d] [%d]  = ", i, j);
            scanf("%d", &first[i][j]);
        }
        printf("\n");
    }

    printf("1st matrix = ");
    for (int i = 0; i < r1; i++)
    {
        printf("\t");
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", first[i][j]);
        }
        printf("\n");
    }

    // second matrix

    printf("Second = \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("second [%d] [%d]  = ", i, j);
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }

    printf("\n2nd matrix = ");
    for (int i = 0; i < r1; i++)
    {
        printf("\t");
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", second[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}