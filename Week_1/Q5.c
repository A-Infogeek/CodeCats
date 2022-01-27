#include <stdio.h>

int main(void)
{
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    //Checking characters using their ASCII values
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("It is an Alphabet\n");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("It is a Digit\n");
    }
    else 
    {
        printf("It is a Special Character\n");
    }
    return 0;
}