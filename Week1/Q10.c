#include <stdio.h>

int main(void)
{
    int bs, gs;
    float hra = 0, da = 0;
    // Input the basic salary
    printf("Enter your basic salary: ");
    scanf("%d", &bs);
     // Calculate the HRA and DA according to the Basic Salary
    if (bs <= 10000)
    {
        hra = 0.2 * bs;
        da  = 0.8 * bs;
    }
    if (bs <= 20000)
    {
        hra = 0.25 * bs;
        da  = 0.9  * bs;
    }
    else
    {
        hra = 0.3  * bs;
        da  = 0.95 * bs;
    }
    // Adding HRA and DA in the Gross Salary
    gs = bs + hra + da;
    printf("Your Gross salary is: %d\n", gs);
    return 0;
}