#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,factorial=1 ;
    // Input the number
    printf("Input the number: ");
    scanf("%d",&n);
    // In case of negative numbers
    if(n<0){
        printf("The factorial of negative numbers does not exist\n");
        exit(0);
    }
    //Finding factorial
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    printf("The factorial of %d is %d\n",n,factorial);
    return 0;
}