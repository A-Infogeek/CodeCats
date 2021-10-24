#include <stdio.h>

int main(void)
{
    int a, b;
    //Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    //Condition check for equality
    if (a == b)
    {
        printf("Both numbers are equal\n");
    }
    //when a is maximum
    else if (a > b)
    {
        printf("%d is maximum\n", a);
    }
    //when b is maximum
    else
    {
        printf("%d is maximum\n", b);
    }
    return 0;
}