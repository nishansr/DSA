#include <stdio.h>
void lower(char *a)
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] += 32;
        }
    }
}
int main()
{
    char a[10], res;
    printf("Enter your string: ");
    scanf("%s", &a);

    lower(a);

    printf("The lower case of the string is %s.", a);

    return 0;
}