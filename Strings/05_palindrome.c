#include <stdio.h>
#include<string.h>

int palindrome(char a[])
{
    int l = 0;
    int h = strlen(a) - 1;
    while (h > l)
    {
        if (a[l++] != a[h--])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    
}
int main()
{
    char a[10];
    printf("Enter your string: ");
    scanf("%s", &a);

    palindrome(a);

    if (palindrome(a))
    {
        printf("The string is palindrome!");
    }
    else
    {
        printf("The string is not palindrome!");
    }

    return 0;
}
