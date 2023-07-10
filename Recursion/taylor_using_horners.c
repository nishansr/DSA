// e^x = 1 + x + (x^2)/2! + (x^3)/3! + (x^4)/4! + ..... + n terms
#include <stdio.h>
double taylor(int x, int n)
{
    static double s;
    if (n == 0)
    {
        return s;
    }
    s = 1 + x * s / n;
    return taylor(x, n - 1);
}
int main()
{
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Answer = %lf", taylor(x, n));

    return 0;
}