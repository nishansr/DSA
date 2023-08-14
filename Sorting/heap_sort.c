#include <stdio.h>

void heapify(int A[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && A[left] > A[largest])
    {
        largest = left;
    }

    if (right < n && A[right] > A[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        heapify(A, n, largest);
    }
}

void HeapSort(int A[], int n)
{
    int i, tmp;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(A, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        heapify(A, i, 0);
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

    HeapSort(A, n);

    printf("\nAfter Sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }

    return 0;
}