#include <stdio.h>

int main(void)
{
   int arr[6]={4,6,20,9,13,23};
    int i,sum_even,sum_odd,*p;
    sum_even=sum_odd=0;
    p=arr;
    for(i=0;i<6;i++){
        if((*(p+i)&1)!=1)
        sum_even+=*(p+i);
        else
        sum_odd+=*(p+i);
    }
    printf("Sum of all even elements:%d\n",sum_even);
    printf("Sum of all odd elements:%d\n",sum_odd);
    return 0;
}