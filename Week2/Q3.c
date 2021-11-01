#include <stdio.h>

int main(void)
{
    int num,sum=0,digit,dup_num;
    //Input the number
    printf("Input the number: ");
    scanf("%d",&num);
    // Keeping a duplicate copy of num
    dup_num=num;
    // Taking one digit each time and adding the cube of it in sum
    do
    {
        digit=num%10;
        sum+=(digit*digit*digit);
        num=num/10;
    } while (num!=0);
    // If the sum of cube of the number is equal to the number, then it an Armstrong number
    if(sum==dup_num)
    printf("%d is an Armstrong number\n",dup_num);
    else
    printf("%d is not an Armstrong number\n",dup_num);
    return 0;
}