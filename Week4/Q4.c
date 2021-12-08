#include <stdio.h>
#include <stdlib.h>

int in_sum(int arr[], int x, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] > x)
            j--;
        else if (arr[i] + arr[j] < x)
            i++;
        else
        {
            printf("[%d,%d]\n", i, j);
            return 1;
        }
    }
return 0;
}

int main(void)
{
    int arr[] = {2,7,11,15};
    int x, n;
    scanf("%d", &x);
    n = sizeof(arr) / sizeof(arr[0]);
    in_sum(arr, x, n);
    return 0;
}