#include <stdio.h>

// ! SUM USING RECURSION METHOD
int sum_recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum_recursive(n - 1);
    }
}

// ! SUM USING ITERATION METHOD
int sum_iterative(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i; //! sum = sum + i;
    }
    return sum;
}

int main()
{
    int term, SUM_recursive, SUM_iterative;
    printf("Enter the number of terms: ");
    scanf("%d", &term);

    SUM_recursive = sum_recursive(term);
    SUM_iterative = sum_iterative(term);

    printf("Sum of first %d natural number using recursion is %d.\n", term, SUM_recursive);
    printf("Sum of first %d natural number using iteration is %d.", term, SUM_iterative);

    return 0;
}