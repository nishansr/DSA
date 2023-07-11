#include <stdio.h>
int main()
{
    int n1[3][3], n2[3][3], mul[3][3], i, j, k, total = 0;

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
            total = 0;
            for (k = 0; k < 3; k++)
            {
                total += n1[i][k] * n2[k][j];
            }
            mul[i][j] = total;
        }
    }

    printf("The multiplication of the matrices are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}