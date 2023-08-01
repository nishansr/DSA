#include <stdio.h>
void count(char a[])
{
    int i, vowel = 0, consonant = 0, other = 0, count = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        count++;
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ||
            a[i] == 'e' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u')
        {
            vowel++;
        }
        else if ((a[i] >= 65 && a[i] <= 97) || a[i] >= 90 && a[i] <= 122)
        {
            consonant++;
        }
        else
        {
            other++;
        }
    }

    printf("Total no. of letter: %d\n", count);
    printf("No. of Vowels = %d\n", vowel);
    printf("No. of Consonants = %d\n", consonant);
    printf("No. of other characters = %d\n", other);
}
int main()
{
    char a[10];
    printf("Enter your string: ");
    scanf("%s", &a);

    count(a);

    return 0;
}
