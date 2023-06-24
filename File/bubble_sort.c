#include<stdio.h>
int main()
{
    int array = {7,8,3,2,1};
    int i,j;
    for(i =0;i<5;i++){
        for(j = 0;j<5-i-1;j++){
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i = 0;i<5;i++){
        printf("%d",array[i]);
    }
    return 0;
}
