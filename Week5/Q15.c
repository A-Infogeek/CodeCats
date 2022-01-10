#include <stdio.h>
#include<stdlib.h>

void sum(int *arr,int n){
    int sum_even=0,sum_odd=0;
    for(int i=0;i<n;i++){
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
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,n);
    free(arr);
    return 0;
}