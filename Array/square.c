#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int val[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&val[i]);
    }
    for ( i = 0; i < n; i++)
    {
        val[i] = val[i]*val[i];
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",val[i]);
    }
    return 0;
}