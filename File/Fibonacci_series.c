#include<stdio.h>
int main()
{
    int n,first = 0,second = 1,next = 1;
    printf("Enter the numebr till you want ");
    scanf("%d\n",&n);
    while (n>next)
    {
        printf("%d\n",next);
        first = second;
        second = next;
        next= first+second;
    }
        
    return 0;
}