//! The array must be sorted in ascending order

#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int set_index(struct Array *arr, int index, int value)
{
    int i;
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = value;
    }
    else
    {
        return -1;
    }
}
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    int index, value;
    printf("What do you want to search: ");
    scanf("%d", &index);
    printf("What do you want to replace with? ");
    scanf("%d", &value);
    if (set_index(&arr1, index, value))
    {
        printf("Item replaced in index = %d!", index);
    }
    else
    {
        printf("Element not found!!");
    }

    printf("The new array is\n");
    Display(arr1);

    return 0;
}