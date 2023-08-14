#include <stdio.h>
void SelectionSort(int A[], int n)
{
    int i, j, tmp, index, least;
    for (i = 0; i < n; i++)
    {
        least = A[i];
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (least > A[j])
            {
                least = A[j];
                index = j;
            }
        }
        if (i != index)
        {
            tmp = A[i];
            A[i] = A[index];
            A[index] = tmp;
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

    SelectionSort(A, n);

    printf("\nAfter Sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }

    return 0;
}