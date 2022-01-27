#include <stdio.h>

int main(void)
{
    char *week_day[7] = {"Monday", "Tuesday", "Wednesday",
                         "Thursday", "Friday", "Saturday", "Sunday"};
    int week_no = 0;
    printf("Enter a Week Number(1-7): ");
    scanf("%d", &week_no);
    if (week_no >= 1 && week_no <= 7)
    {
        printf("It is %s\n", week_day[week_no - 1]);
    }
    else
    {
        printf("Invalid Input! Please input no between 1-7.\n");
    }
    return 0;
}