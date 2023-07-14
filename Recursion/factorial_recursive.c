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
int main()
{
    int n, res;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &n);

    res = fact(n);

    printf("The factorial of %d in %d.\n", n, res);

    return 0;
}