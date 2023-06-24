#include<stdio.h>
#include<math.h>
int main()
{
    float n,s;
    printf("Enter the number:");
    scanf("%f",&n);
    s = sqrt(n);
    printf("Square root of %.2f is %.2f",n,s);
    return 0;
}