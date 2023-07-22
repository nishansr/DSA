#include<stdio.h>
int main()
{
    int n[10], i, small;
    printf("Enter ten numbers: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&n[i]);
    }
    small = n[0];
    for (i = 1; i < 10; i++)
    {
        if(small>n[i])
        {
            small = n[i];
        }
    }
    printf("The largest number is %d.", small);

    return 0;
}