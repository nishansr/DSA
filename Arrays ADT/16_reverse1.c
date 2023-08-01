#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void display_reverse(struct Array arr)
{
    int i;
    printf("The array in reverse: \n");
    for (i = arr.length - 1; i >= 0; i--)
    {
        printf("%d\t", arr.A[i]);
    }
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};

    display_reverse(arr1);

    return 0;
}