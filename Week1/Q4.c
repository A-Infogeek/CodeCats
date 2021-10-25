#include <stdio.h>

int main(void)
{
    //Input a year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    //if a year is divisible by 4 and not by 100
    //Or it is directly divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
        // if above conditions doesn't follow, then it is a non-leap year
        else
        {
            printf("%d is not a leap year\n", year);
        }
        return 0;
    }