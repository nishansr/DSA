#include <stdio.h>

int partition(int A[], int l, int h)
{
    int x = l, y = h, p = A[l], tmp;
    while (x<y)
    {
        while (A[x]<=p)
        {
            x++;
        }
        while (A[y]>p)
        {
            y--;
        }
        if(x<y)
        {
            tmp = A[x];
            A[x] = A[y];
            A[y] = tmp;
        }
    }
    
    A[l] = A[y];
    A[y] = p;
    
    return y;
}

void QuickSort(int A[], int l, int h)
{
    int p;
    if(l<h)
    {
        p = partition(A, l, h);
        QuickSort(A, l, p-1);
        QuickSort(A, p+1, h);
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

    QuickSort(A, 0, n - 1);

    printf("\nAfter Sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }

    return 0;
}