#include <stdio.h>

int main(void)
{
    int t,x,n;
    scanf("%d",&t);
    while(t--){
        int d=0;
        scanf("%d %d",&x,&n);
    while((d++)<n){
         if(x%2==0)
         x-=d;
         else x+=d;
    }
    printf("%d\n",x);
    }
    return 0;
}