#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number you want sum of it from 1\n");
    scanf("%d\n",&num);
    int sum = 0;
    for (int  i =1; i <=num; i++)
    {
        sum = sum+i;
    }
    printf("Sum of first %d number is %d",num,sum);
    return 0;
}