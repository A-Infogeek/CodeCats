#include <stdio.h>

int main(void)
{
    char s[15];
    int i=0;
    printf("Enter a string:");
    gets(s);
    while(*(s+i)!='\0'){
        if(s[i]>='a' && s[i]<='z')
        s[i]-=32;
        else if(s[i]>='A' && s[i]<='Z')
        s[i]+=32;
        i++;
    }
    puts(s);
    return 0;
}