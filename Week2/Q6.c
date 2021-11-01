#include <stdio.h>

int main(void)
{
    int num,pow,n;
     //Input the number
    printf("Input the number: ");
    scanf("%d", &num);
     //Input the power
    printf("Input the power: ");
    scanf("%d", &pow);
    // Keeping a copy of the number
    n=num;
    for (int i=1;i<pow;i++){
       num*=n;
    }
    printf("%d^%d: %d\n",n,pow,num);
    return 0;
}