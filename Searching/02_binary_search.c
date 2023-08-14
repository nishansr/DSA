#include <stdio.h>

int BinarySearch(int A[], int l, int h, int key)
{
    int mid, flag = -1;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            flag = mid;
        }
        else if (key < A[mid])
        {
            return BinarySearch(A, l, mid - 1, key);
        }
        else
        {
            return BinarySearch(A, l, mid + 1, key);
        }
    }
    else
    {
        return flag;
    }
}

int main()
{
    int i, n, key, A[10], flag;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("What do you want to search: ");
    scanf("%d", &key);

    flag = BinarySearch(A, 0, n - 1, key);
    if (flag == -1)
    {
        printf("Item not found!!");
    }
    else
    {
        printf("Item found in index %d", flag);
    }

    return 0;
}