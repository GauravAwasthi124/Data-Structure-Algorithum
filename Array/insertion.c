#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter the number you want print\n");
    scanf("%d",&n);
    printf("Insert the array\n");
    int array[50];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    int number,position;
    printf("\nEnter the position\n");
    scanf("%d",&position);
    printf("Enter the element\n");
    scanf("%d",&number);
    for ( i = n-1; i >=position-1; i--)
        array[i+1] = array[i];
        array[position-1] = number;
    
        n++;
    
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}
