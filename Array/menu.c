#include<stdio.h>
#include<stdlib.h>
void merge_array();
void insert_array();
void delete_array();
void traverse_array();
void reverse_array();
int main()
{
    while (1)
    {
    int n;
    printf("\nPress 1 for insertion in array\nPress 2 for deletion in array\n");
    printf("Press 3 for merge the  array\nPress 4 for traverse in array\nPress 5 for Reverse of an array\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        insert_array();
        break;
    case 2:
        delete_array();
        break;
    case 3:
        merge_array();
        break;
    case 4:
        traverse_array();
        break;
    case 5:
        reverse_array();
        break;
    default:
        printf("Wrong choice");
        break;
    }
    }
    return 0;
}
void merge_array()
{
    int i,a,b,c;
    int array1[50],array2[50],array3[50];
    printf("Enter the length of first array\n");
    scanf("%d",&a);
    printf("Enter the element of first array\n");
    for ( i = 0;i<a; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Enter the length of second array\n");
    scanf("%d",&b);
    printf("Enter the element of second array\n");

     for ( i = 0; i < b; i++)
    {
        scanf("%d",&array2[i]);
    }
    c = a+b;    
    for ( i = 0; i < a; i++)
    {
        array3[i] = array1[i];
    }
    for ( i = 0; i < b; i++)
    {
        array3[i+a]=array2[i];
    }
    
    for ( i = 0; i < c; i++)
    {
        printf("%d\t",array3[i]);
    }
    
}
void insert_array()
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
}
void delete_array()
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
}
void traverse_array()
{
    int i,n;
    printf("Enter the number you want print\n");
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
}
void reverse_array()
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
}