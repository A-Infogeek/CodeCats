#include <stdio.h>
#include<string.h>

int main(void)
{
    char s1[15]="Rishabh";
    char s2[]=" Raj";
    char *p1,*p2;
    p1=s1;
    p2=s2;
    int n=strlen(s1);
    while(*p2!='\0'){
        *(p1+n)=*p2;
        n++;
        p2++;
    }
    *(p1+n)='\0';
    printf("%s\n",s1);
    return 0;
}