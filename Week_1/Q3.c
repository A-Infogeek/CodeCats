#include <stdio.h>

int main(void)
{
    //Input three numbers
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    //When num1 is maximum
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is maximum\n", num1);
    }
    //When num2 is maximum
    else if (num2 > num3)
    {
        printf("%d is maximum\n", num2);
    }
    //When num3 is maximum
    else
    {
        printf("%d is maximum\n", num3);
    }
    return 0;
}