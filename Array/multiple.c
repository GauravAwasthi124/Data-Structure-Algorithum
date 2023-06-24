#include<stdio.h>

int main()
{
    int n,i,mul = 1;
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
        mul *= array[i];
    }
    printf("Multiplication is %d\n",mul);
    return 0;
}