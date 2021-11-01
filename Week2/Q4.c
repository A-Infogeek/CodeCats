#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num,ctr=0;
    //Input the number
    printf("Input the number: ");
    scanf("%d", &num);
    // If a number is not divisible by any number till its half
    // then, it is a prime number
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
           ctr++;
           break;
        }
    }
    if(ctr==0 && num>1){
    printf("%d is a prime number\n", num);
    }
    else
    printf("%d is not a prime number\n",num);
    return 0;
}