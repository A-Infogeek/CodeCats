#include <stdio.h>

int main(void)
{
    int n,num,d;
    int l = 1, sum=0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&num);
        while ((d = num / (5 * l)) >= 1)
        {
            sum += d;
            l *= 5;
        }
        printf("%d\n",sum);
        sum=0;
        l=1;
    }
    return 0;
}