#include<stdio.h>

int main()
{
    int i,n,j,temp;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int array[n];
    j = n-1;
    printf("Enter the array element\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0,j; i <j; i++,j--)
    {
        temp= array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    printf("Answer\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    
    return 0;
}