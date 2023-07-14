// 0 1 1 2 3 5 8 13 21 34 55

#include <stdio.h>
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The fibonacci number upto %d term i:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", fibo(i));
    }

    return 0;
}