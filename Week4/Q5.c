#include <stdio.h>

int count(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    return count;
}

void sort(int arr[], int x, int a, int b)
{
    for (int i = a; i < b; i++)
    {
        arr[i] = x;
    }
}

int main(void)
{
    int arr[] = {2,2,1,0,1,2,1,2};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int count_0, count_1, count_2;
    count_0 = count(arr, n, 0);
    count_1 = count(arr, n, 1) + count_0;
    count_2 = count(arr, n, 2) + count_1;

    sort(arr, 0, 0, count_0);
    sort(arr, 1, count_0, count_1);
    sort(arr, 2, count_1, count_2);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}