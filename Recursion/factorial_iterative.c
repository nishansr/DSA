#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i < n; i++)
    {
        fact += fact * i; //! fact = fact + (fact * i);
    }
    return fact;
}

int main()
{
    int n, res;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &n);

    res = factorial(n);

    printf("The factorial of %d is %d.\n", n, res);

    return 0;
}
