#include <stdio.h>
int main()
{
    int rows, columns;
    int a[10][10], b[10][10], c[10][10], i, j;
    printf("Enter the umber of rows & columns = ");
    scanf("%d %d", &rows, &columns);

    printf("Enter elements for A matrix\n ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    printf("A = ");
    for (i = 0; i < rows; i++)
    {
        printf("\t");
        for (j = 0; j < columns; j++)
        {
            printf("%d\t ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nEnter elements for B matrix\n ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("B = ");
    for (i = 0; i < rows; i++)
    {
        printf("\t");
        for (j = 0; j < columns; j++)
        {
            printf("%d\t ", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n\nC = A+B = ");
    for (i = 0; i < rows; i++)
    {
        printf("\t");
        for (j = 0; j < columns; j++)
        {
            printf("%d\t ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}