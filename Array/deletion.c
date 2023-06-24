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
    int position;
    printf("\nEnter the position\n");
    scanf("%d",&position);
    if (position>=n+1)
    {
        printf("Deletion is not posible");
    }
    else
    {
        for ( i = position-1;i<n-1; i++)
        {
            array[i] = array[i+1];
        }
        
    }
    for ( i = 0; i < n-1; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}



    
    