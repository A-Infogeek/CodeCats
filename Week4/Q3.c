#include <stdio.h>

void rev(int arr[],int i,int j){
    while(i<j){
      int temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
      i++;
      j--;
    }
}

int main(void)
{
    int k,n,i,l,j;
    printf("Enter k:");
    scanf("%d",&k);
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=k%n;
    rev(arr,0,n-k-1);
    rev(arr,n-k,n-1);
    rev(arr,0,n-1);
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
}