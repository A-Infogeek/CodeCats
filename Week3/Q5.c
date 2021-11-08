#include <stdio.h>

int main(void)
{
    int n, sum_total = 0, sum_oddNum = 0, sum_evenNum = 0, sum_oddPos = 0, sum_evenPos = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element-%d : ", i);
        scanf("%d", &arr[i]);
        sum_total += arr[i];
        if (arr[i] & 1)
        {
            sum_oddNum += arr[i];
        }
        else
            sum_evenNum += arr[i];
        if (i & 1)
            sum_oddPos += arr[i];
        else
            sum_evenPos = sum_evenPos + arr[i];
    }
    printf("The sum of all elements:   %d\n", sum_total);
    printf("The sum of even elements:  %d\n", sum_evenNum);
    printf("The sum of odd elements:   %d\n", sum_oddNum);
    printf("The sum of even positions: %d\n", sum_evenPos);
    printf("The sum of odd positions:  %d\n", sum_oddPos);
    return 0;
}