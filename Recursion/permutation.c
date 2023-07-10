#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}
int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}
int main()
{
    int n, r, res;
    printf("Enter the number of objects in the set: ");
    scanf("%d", &n);
    printf("Enter the number of chosing objects from the set: ");
    scanf("%d", &r);

    if (n < r)
    {
        printf("Wrong Input!!");
    }
    else
    {
        res = permutation(n, r);
        printf("c(%d, %d) = %d", n, r, res);
    }
}