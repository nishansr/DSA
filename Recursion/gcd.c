#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)               // if(b==0)
    {                         // {
        return b;             //    return a;
    }                         // }
    else                      // else
    {                         // {
        return gcd(b % a, a); //    gcd(b, a%b);
    }                         // }
}
int main()
{
    int n1, n2, res;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    res = gcd(n1, n2);

    printf("The GCD of %d and %d is %d.", n1, n2, res);

    return 0;
}