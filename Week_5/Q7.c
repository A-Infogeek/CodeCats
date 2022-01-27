#include <stdio.h>

int main(void)
{
    int i;
    char s[]="Rishabh Raj";
    char *p=s;
    for(i=0;*(p+i)!='\0';i++);
    printf("The length of string is: %d\n",i);
    return 0;
}