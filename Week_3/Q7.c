#include <stdio.h>

int main(void)
{
    int n, largest, smallest, largest_2nd, smallest_2nd;
    printf("How many elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Element-%d : ", i);
        scanf("%d", &arr[i]);
    }
    largest = smallest = largest_2nd = smallest_2nd = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > largest)
            largest = arr[j];
        if (arr[j] < smallest)
            smallest = arr[j];
    }
    for (int k = 0; k < n; k++)
    {
        if (largest_2nd < arr[k] && arr[k] < largest)
            largest_2nd = arr[k];
        if (smallest_2nd > arr[k] && arr[k] > smallest)
            smallest_2nd = arr[k];
    }

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
    printf("The 2nd largest number is: %d\n", largest_2nd);
    printf("The 2nd smallest number is: %d\n", smallest_2nd);
    return 0;
}