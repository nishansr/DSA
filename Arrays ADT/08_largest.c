#include<stdio.h>
int main()
{
    int n[10], i, large;
    printf("Enter ten numbers: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&n[i]);
    }
    large = n[0];
    for (i = 1; i < 10; i++)
    {
        if(large<n[i])
        {
            large = n[i];
        }
    }
    printf("The largest number is %d.", large);

    return 0;
}