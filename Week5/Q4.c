#include <stdio.h>

int main(void)
{
    int arr[6]={2,4,8,-1,9,0};
    int *p,max,min,i;
    p=arr;
    for(i=1,max=*(p),min=*(p);i<6;i++){
        if(max<*(p+i))
        max=*(p+i);
        if(min>*(p+i))
        min=*(p+i);
    }
    printf("Maximum element is: %d\n",max);
     printf("Minimum element is: %d\n",min);
    return 0;
}