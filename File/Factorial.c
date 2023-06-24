#include<stdio.h>
int fact(int n);
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    fact(number);
    if (number<0)
    {
        printf("Wrong number");
    }
    else
    {
        
        printf("%d",fact(number));
    }
    
    return 0;
}
int fact(int n){
    int fact = 1;
    if (n ==0)
    {
        return 1;
    }
    else
    {
        for (int i = n; i>=1; i--)
        {
            fact = fact*i;
            return fact;
            
        }
    }
    
    
}