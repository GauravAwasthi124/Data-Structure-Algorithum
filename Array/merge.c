#include<stdio.h>
void merge_array();
int main()
{
   merge_array();
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