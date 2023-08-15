#include <stdio.h>
#define SIZE 10

int hash(int key)
{
    return key % SIZE;
}

int prob(int H[], int key)
{
    int i = 0, index = hash(key);
    while (H[(index + i) % SIZE] != 0)
    {
        i++;
    }
    return (index + i) % SIZE;
}

void Insert(int H[], int key)
{
    int index = hash(key);
    if (H[index] != 0)
    {
        index = prob(H, key);
    }
    H[index] = key;
}

int Search(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != key)
    {
        i++;
    }

    return (index + i) % SIZE;
}

int main()
{
    int HT[10];
    Insert(HT, 12);
    Insert(HT, 35);
    Insert(HT, 35);
    Insert(HT, 26);
    Insert(HT, 15);

    printf("\nKey found at %d\n",Search(HT,35));
}
