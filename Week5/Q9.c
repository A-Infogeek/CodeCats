#include <stdio.h>
#include<string.h>

int main(void)
{
    char *ptr1="Rishabh Raj";
    int n=strlen(ptr1);
    char pt2[n];
    int i=0;
    while(*ptr1!='\0'){
        pt2[i]=*ptr1;
        i++;
        ptr1++;
    }
    pt2[i]='\0';
    printf("%s\n",pt2);
    return 0;
}