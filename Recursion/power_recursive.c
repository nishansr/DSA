#include <stdio.h>
int power(int base, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, n - 1);
    }
}
int main()
{
    int b, n, res;
    printf("Enter the value of base: ");
    scanf("%d", &b);
    printf("Enter power: ");
    scanf("%d", &n);

    res = power(b, n);

    printf("Value of %d to the power %d is %d.\n", b, n, res);

    return 0;
}