#include<stdio.h>

int fibonacci(int n);
int main()
{
    int number;
    printf("Enter the numebr you want");
    scanf("%d",&number);
    printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    if (n == 1|| n==2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    
    
}