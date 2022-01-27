#include <stdio.h>

int strlen(char *arr){
    int count=0;
    while(*arr!='\0'){
        count++;
        arr++;
    }
    return count;
}

int main(void)
{
    char str[]="Rishabh Raj";
    int result=strlen(str);
    printf("The length of the string is: %d\n",result);
    return 0;
}