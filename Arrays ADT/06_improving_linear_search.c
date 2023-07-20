#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int search_transposition(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            return i;
            swap(&arr->A[i], &arr->A[i-1]); 
        }
    }
    return -1;
}
int search_move_to_zero(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            return i;
            swap(&arr->A[i], &arr->A[0]); 
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
    if (search_move_to_zero(&arr1, key))
    {
        printf("Item found in index = %d!", search_move_to_zero(&arr1, key));
    }
    else
    {
        printf("Item not found!!");
    }
    while(search_transposition(&arr1, key)){
        printf("Item found in index = %d!", search_transposition(&arr1, key));
    }
    return 0;
}