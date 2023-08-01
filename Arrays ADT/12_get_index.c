#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int get_index(struct Array *arr, int index)
{
    int i;
    if (index >= 0 && index < arr->length)
    {
        for (i = 0; i < arr->length; i++)
        {
            if (arr->A[i] == index)
            {
                return i;
            }
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    int element;
    printf("What do you want to search: ");
    scanf("%d", &element);
    if (get_index(&arr1, element))
    {
        printf("Element found in index = %d!", get_index(&arr1, element));
    }
    else
    {
        printf("Element not found!!");
    }
    return 0;
}