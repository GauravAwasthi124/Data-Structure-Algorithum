#include<stdio.h>
void find(int num);
int main()
{
    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);
    find(number);
    return 0;
}
void find(int number){
    if (number % 2==0)
    {
        printf("Even"); 
        
    }
    else
    {
        printf("Odd");
        
    }
}