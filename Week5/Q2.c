#include <stdio.h>

int main(void)
{
    int a,b,c,*p,*q;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    p=&a;
    q=&b;

    c=*p;
    *p=*q;
    *q=c;
    printf("Swapped values of a and b is: a=%d, b=%d\n",a,b);
    return 0;
}