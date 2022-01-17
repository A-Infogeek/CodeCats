#include <stdio.h>

int main(void)
{
    char s[]="Rishabh";
    char ch='l';
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(ch==s[i])
        count++;
    }
    printf("The frequency of %c is %d\n",ch,count);
    return 0;
}