#include <stdio.h>
#include<string.h>

int main(void)
{
    char s[15]="Rishabh Raj";
    int len=strlen(s);
    for(int i=0,j=len-1;i<len/2;i++,j--){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    puts(s);
    return 0;
}