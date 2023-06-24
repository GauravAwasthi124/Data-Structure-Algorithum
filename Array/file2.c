#include<stdio.h>

int main()
{
    int i,n,min,max;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int array[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    min=max=array[0];
    for ( i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min = array[i];
        }
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    printf("Minimun = %d Maximum = %d",min,max);
    return 0;
}