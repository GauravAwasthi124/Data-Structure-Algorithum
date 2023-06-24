#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        if (n <= 0)
        {
            return -1;
        }
        else
        {
            sum = sum+i;
        }
    }
    printf("%d\n", sum);
       
    return 0;
}