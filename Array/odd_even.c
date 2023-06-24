#include<stdio.h>

int main()
{
    int i,n,even,odd;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int array[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    even = odd = 0;
    for ( i = 0; i < n; i++)
    {
        if (array[i]%2 ==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("Even number:%d Odd number:%d",even,odd);
    return 0;
}