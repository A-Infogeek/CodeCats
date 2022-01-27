#include <stdio.h>
#include<string.h>

int main(void)
{
    char s[]="Rishabh";
    char t[]=" Raj";
    int l=strlen(s);
    for(int i=l,j=0;t[j]!='\0';i++,j++){
        s[i]=t[j];
    }
    puts(s);
    return 0;
}