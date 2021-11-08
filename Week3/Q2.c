#include <stdio.h>

int main(void)
{

    //First loop for a line
    for(int i=5;i>0;i--){
        //Second loop for printing the number of stars in that line
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}