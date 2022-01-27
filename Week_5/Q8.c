#include <stdio.h>

int main(void)
{
    int i,vowel=0,cons=0;
    char s[]="India";
    char *p=s;
    for(i=0;*(p+i)!='\0';i++){
        char ch=*(p+i);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        vowel++;
        else
        cons++;
    }
    printf("Vowels are: %d\n",vowel);
    printf("Consonants are: %d\n",cons);
    return 0;
}