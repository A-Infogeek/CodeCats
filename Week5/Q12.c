#include <stdio.h>

void sum(int *arr){
    int sum_even=0,sum_odd=0;
    for(int i=0;i<5;i++){
        if(arr[i]&1)
        sum_odd+=arr[i];
        else
        sum_even+=arr[i];
    }
    printf("The sum of even elements of the array is: %d\n",sum_even);
    printf("The sum of odd elements of the array is: %d\n",sum_odd);
}

int main(void)
{
    int arr[5]={0,1,2,3,4};
    sum(arr);
    return 0;
}