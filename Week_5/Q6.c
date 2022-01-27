#include <stdio.h>

int main(void)
{
    int i,pos=0,neg=0,zero=0,*p;
    int arr[6]={-0,-1,-1,2,0,98};
    p=arr;
    for(i=0;i<6;i++){
        if(*(p+i)<0)
        neg++;
        else if(*(p+i)>0)
        pos++;
        else
        zero++;
    }
    printf("The number of positive elements: %d\n",pos);
    printf("The number of negative elements: %d\n",neg);
    printf("The number of zero elements: %d\n",zero);
    return 0;
}