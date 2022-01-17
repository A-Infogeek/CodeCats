#include <stdio.h>

int main(void)
{
    char s1[]="Rishabh";
    char s2[]="Rishabh1";
    int flag;
    for(int i=0;(s1[i]!='\0'|| s2[i]!='\0');i++){
        if(s1[i]>s2[i]){
            flag=0;
            printf("1\n");
            break;
        }
        else if(s1[i]<s2[i]){
            flag=0;
            printf("-1\n");
            break;
        }
        else
        flag=1;
    }
    if(flag==1)
    printf("0\n");
    return 0;
}