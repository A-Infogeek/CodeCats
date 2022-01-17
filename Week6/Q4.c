#include <stdio.h>

int main(void)
{
    char s[15];
    printf("Enter a string: ");
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        printf("ASCII Value of %c is %d\n",s[i],s[i]);
    }
    return 0;
}