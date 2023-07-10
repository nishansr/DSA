#include <stdio.h>

int power(int base, int n)
{
    int i, pow = 1;
    for (i = 1; i <= n; i++)
    {
        pow *= base;
    }
    return pow;
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