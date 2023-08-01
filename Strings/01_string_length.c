#include <stdio.h>
int length(char *a)
{
    int i, len = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char a[10];
    int len;
    printf("Enter your string: ");
    scanf("%s", &a);

    len = length(a);

    printf("The length of the string is %d.", len);

    return 0;
}