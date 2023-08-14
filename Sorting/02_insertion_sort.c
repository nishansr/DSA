    #include <stdio.h>
    void InsertionSort(int A[], int n)
    {
        int i, j, tmp;
        for (i = 1; i < n; i++)
        {
            j = i - 1;
            tmp = A[i];
            while ((tmp < A[j]) && j >= 0)
            {
                A[j + 1] = A[j];
                j--;
            }
            A[j + 1] = tmp;
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

        InsertionSort(A, n);

        printf("\nAfter Sorting:");
        for (i = 0; i < n; i++)
        {
            printf("\t%d", A[i]);
        }

        return 0;
    }