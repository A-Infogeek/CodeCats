#include <stdio.h>

int main(void)
{
    int a,b,*p,*q;
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("The sum of two is:%d\n",*p+*q);
    return 0;
}