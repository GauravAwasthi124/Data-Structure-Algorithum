#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of an array");
    scanf("%d",&n);

    int array[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
     for ( i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}