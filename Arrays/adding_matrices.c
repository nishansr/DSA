#include <stdio.h>
int main()
{
    int n1[3][3], n2[3][3], sum[3][3], i, j;

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &n1[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &n2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = n1[i][j] + n2[i][j];
        }
    }

    printf("The sum of the matrices are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}