// e^x = 1 + x + (x^2)/2! + (x^3)/3! + (x^4)/4! + ..... + n terms
#include <stdio.h>
double taylor(int x, int n)
{
    double s = 1, num = 1, den = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
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