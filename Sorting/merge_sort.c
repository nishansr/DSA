#include <stdio.h>

void Merge(int A[], int l, int m, int h)
{
    int i, x = l, k = l, y = m, B[10];
    while (x < m && y <= h)
    {
        if (A[x] < A[y])
        {
            B[k] = A[x];
            x++;
            k++;
        }
        else
        {
            B[k] = A[y];
            y++;
            k++;
        }
    }

    while (x < m)
    {
        B[k] = A[x];
        x++;
        k++;
    }

    while (y <= h)
    {
        B[k] = A[y];
        y++;
        k++;
    }

    for (i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        Merge(A, l, mid + 1, h);
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

    MergeSort(A, 0, n - 1);

    printf("\nAfter Sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }

    return 0;
}