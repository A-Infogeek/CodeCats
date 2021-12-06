#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 8, 5};
    int rev[4];
    for (int i = 3, j = 0; i >= 0; i--, j++)
    {
        rev[j] = arr[i];
        printf("%d ", rev[j]);
    }

    printf("\n");
    return 0;
}