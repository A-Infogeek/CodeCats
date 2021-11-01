#include <stdio.h>

int main(void)
{
    int n, sum = 0, sum_odd = 0;
    //Enter the number 
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The first %d natural number is: \n", n);
    //Loop for taking all the  numbers
    for (int i = 1; i <= 7; i++)
    {
        printf("%d ", i);
        //Add all the values of i each time in sum
        sum += i;
        // If i is odd, then adding those numbers in "sum_odd"
        if (i & 1 == 1)
        {
            sum_odd += i;
        }
    }
    printf("\n");
    // Printing all the values
    printf("The sum of Natural Number upto %d terms: %d\n", n, sum);
    printf("The sum of Even Natural Number upto %d terms: %d\n", n, (sum - sum_odd));
    printf("The sum of Odd Natural Number upto %d terms: %d\n", n, sum_odd);
    return 0;
}