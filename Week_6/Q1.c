#include <stdio.h>

int main(void)
{
    char *s={"India is Great"};
    int c=0,w=0;
    int i=0;
    while(*(s+i)!='\0'){
        if((*(s+i)==' ')){
        w++;
        }
        c++;
        i++;
    }
    printf("The total number of characters in the string is: %d\n",c);
    printf("The total number of words in the string is: %d\n",w+1);
    return 0;
}