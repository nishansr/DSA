#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, n, i;
    printf("Enter the size of your array: ");
    scanf("%d", &n);

    //! Dynamic Memory Allocation
    // a = (int *)malloc(n * sizeof(int));
    a = (int *)calloc(n, sizeof(int));

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }

    printf("You entered:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }

    free(a);
    return 0;
}