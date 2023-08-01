#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int binary_search(struct Array *arr, int key)
{
    int l = 0, h = arr->length, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr->A[mid])
        {
            return mid;
        }
        else if (key < arr->A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    int key;
    printf("What do you want to search: ");
    scanf("%d", &key);
    if (binary_search(&arr1, key))
    {
        printf("Item found in index = %d!", binary_search(&arr1, key));
    }
    else
    {
        printf("Item not found!!");
    }
    return 0;
}