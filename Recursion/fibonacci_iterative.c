// 0 1 1 2 3 5 8 13 21 34 55

#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The fibonacci number is %d term is \n", n);

    printf("%d\t", a);
    printf("%d\t", b);
    for (i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\t", c);
    }

    return 0;
}