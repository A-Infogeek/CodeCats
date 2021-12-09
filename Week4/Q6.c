#include <stdio.h>

int find_index(int arr[], int n, int K)
{
    // Lower and upper bounds
    int start = 0;
    int end = n - 1;

    // Traverse the search space
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // If K is found
        if (arr[mid] == K)
            return mid;

        else if (arr[mid] < K)
            start = mid + 1;

        else
            end = mid - 1;
    }

    // Return insert position
    return end + 1;
}

int main(void)
{
    int arr[] = {1, 3, 5, 7}, k, n;
    scanf("%d", &k);
    n = sizeof(arr) / sizeof(arr[0]);
    int result = find_index(arr,n, k);
    printf("%d\n", result);
    return 0;
}