#include <stdio.h>

void ShellSort(int A[], int n)
{
    int i, j, gap, tmp;
    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            tmp = A[i];
            j = i - gap;
            while ((tmp < A[j]) && j >= 0)
            {
                A[j + gap] = A[j];
                j -= gap;
            }
            A[j + gap] = tmp;
        }
    }
}

int main()
{
    int i, n, A[10];
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the number of elements:\n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nBefore Sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }

    ShellSort(A, n);

    printf("\nAfter Sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }

    return 0;
}