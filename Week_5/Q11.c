#include <stdio.h>

int main(void)
{
    char s[]="Rishabh";
    char *ptr=s;
    while(*ptr!='\0'){
        printf("%d ",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}