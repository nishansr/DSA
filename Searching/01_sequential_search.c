#include <stdio.h>
int main()
{
    int i, n, key, A[10];
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("What do you want to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            printf("Item found in index %d", i);
            return 0;
        }
    }
    printf("Item not found");

    return 0;
}