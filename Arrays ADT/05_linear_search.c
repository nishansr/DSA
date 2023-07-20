#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int search(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
            return i;
    }
    return -1;
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    int key;
    printf("What do you want to search: ");
    scanf("%d",&key);
    if (search(&arr1, key))
    {
        printf("Item found in index = %d!", search(&arr1, key));
    }
    else
    {
        printf("Item not found!!");
    }
    return 0;
}