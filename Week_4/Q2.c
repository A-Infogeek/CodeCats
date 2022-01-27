#include <stdio.h>
#define N 100000

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int arr[n],hash[N];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        hash[arr[i]]++;
    }
    int q=n;
    while (q--)
    {
        int x;
        scanf("%d",&x);
        printf("%d\n",hash[x]);
       
    }
    int s;
    scanf("%d",&s);
    if(hash[s]==0)
    printf("%d is not present in the array\n",s);
    else
    printf("%d is present in the array\n",s);
    return 0;
}