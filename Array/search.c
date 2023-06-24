#include<stdio.h>
int main()
{
    int n,search,i;
    printf("Enter the array\n");
    scanf("%d",&n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter the array you want to search\n");
    scanf("%d",&search);
    for ( i = 0; i < n; i++)
    {
    if (a[i] == search)
    {
        printf("found");
        break;
    }
    else
    {
        printf("not found\n");
    }
    
    }
    
    
    return 0;
}