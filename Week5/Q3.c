#include <stdio.h>

int main(void)
{
    int a, b, *p, *q;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    p = &a;
    q = &b;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("Swapped values of a and b is: a=%d, b=%d\n", a, b);
    return 0;
}