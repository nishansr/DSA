#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
int sum_array(struct Array arr)
{
    int i, sum = 0;
    for (i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}
int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    int sum;

    sum = sum_array(arr1);
    printf("The sum of the array is %d.", sum);

    return 0;
}