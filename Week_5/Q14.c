#include <stdio.h>
#include<stdlib.h>

int sum(int *arr,int n){
    int add=0;
    for(int i=0;i<n;i++){
        add+=arr[i];
    }
    return add;
}

int main(void)
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d\n",sum(arr,n));
    free(arr);
    return 0;
}