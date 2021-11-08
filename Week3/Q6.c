#include <stdio.h>

int main(void)
{
    int n,num,count=0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array :\n", n);
    
    for (int i = 0; i < n; i++)
    {
        printf("Element-%d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Input the number for searching: ");
    scanf("%d",&num);
    
    for(int j=0;j<n;j++){
     if(arr[j]==num){
         count++;
     }
    }
    printf("The number of '%d' in the elements is: %d\n",num,count);
    return 0;
}