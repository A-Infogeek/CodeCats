#include <stdio.h>

int main(void)
{
    char s1[10],s2[10];
    printf("Enter a string \n");
    gets(s1);
    int i=0;
    while(*(s1+i)!='\0'){
        *(s2+i)=*(s1+i);
        i++;
    }
    *(s2+i)='\0';
    printf("%s",s2);
    return 0;
}