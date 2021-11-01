#include <stdio.h>

int main(void)
{
    int num, digit, rev_num = 0;
    //Input the number
    printf("Input the number: ");
    scanf("%d", &num);
    // Reverse the number
    for (int t = num; num != 0; num = num / 10)
    {
        digit = num % 10;
        rev_num = rev_num * 10 + digit;
    }
    // Printing the reverse number
    printf("The number in reverse order is: %d\n", rev_num);
    return 0;
}