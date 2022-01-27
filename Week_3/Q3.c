#include <stdio.h>

int main(void)
{

    //First loop for a line
    for (int i = 1; i <= 5; i++)
    {
        //Second loop for printing the leading spaces in that line
        for (int j = i; j < 5; j++)
        {
            printf(" ");
        }
        // Third loop for printing the number of stars in that line
        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}