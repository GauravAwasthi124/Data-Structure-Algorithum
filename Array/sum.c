#include<stdio.h>

int main()
{
    int n,i,sum = 0;
    printf("Enter the number you want to print\n");
    scanf("%d",&n);    
    int array[n];
    printf("Enter the values");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("Sum is %d\n",sum);
    return 0;
}