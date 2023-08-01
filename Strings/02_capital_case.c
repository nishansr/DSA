#include <stdio.h>
void capitalize(char *a)
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        a[i] -= 32;
    }
}
int main()
{
    char a[10], res;
    printf("Enter your string: ");
    scanf("%s", &a);

    capitalize(a);

    printf("The capital case of the string is %s.", a);

    return 0;
}