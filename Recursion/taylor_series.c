// e^x = 1 + x + (x^2)/2! + (x^3)/3! + (x^4)/4! + ..... + n terms
#include <stdio.h>
double taylor(int x, int n)
{
    static double power = 1, fact = 1;
    double result;
    if (n == 0)
    {
        return 1.0;
    }
    result = taylor(x, n - 1);
    power *= x;
    fact *= n;
    return (result + power / fact);
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