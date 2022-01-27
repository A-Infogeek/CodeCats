#include <stdio.h>

int main(void)
{
    int i, j, k, l;
    //First loop for a line
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j == i || j == 2 * 5 - i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}