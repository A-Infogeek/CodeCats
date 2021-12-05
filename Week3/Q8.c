#include <stdio.h>

int main(void)
{
    int t, g, i, q, n;
    scanf("%d", &t);
    for (int a = 0; a < t; a++)
    {
        scanf("%d",&g);
        for (int b = 0; b < g; b++)
        {
            scanf("%d %d %d",&i,&n,&q);

            if ((n % 2 == 0) || (i == q))
            {
                printf("%d\n", n / 2);
            }
            else
                printf("%d\n", (n / 2) + 1);
        }
    }
    return 0;
}
