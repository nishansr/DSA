#include <stdio.h>
void Bubble_sort(int A[], int n)
{
    int i, j, tmp, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            tmp = A[j];
            if (A[j] > A[j + 1])
            {
                A[j] = A[j + 1];
                A[j + 1] = tmp;

                flag = 1; //! To check if the list is already sorted so i won't repeat
            }
            if (flag == 0)
            {
                break;
            }
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

    Bubble_sort(A, n);

    printf("\nAfter Sorting:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }

    return 0;
}