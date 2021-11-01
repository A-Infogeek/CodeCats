#include <stdio.h>
#include <stdlib.h>

int prime_check(int *n);

int main(void)
{
    int num, ctr = 0, count = 0, stno, enno;
    //Input the number
    printf("Input the number: ");
    scanf("%d", &num);
    // If a number is not divisible by any number till its half
    // then, it is a prime number
    ctr = prime_check(&num);
    if (ctr == 0 && num > 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
        printf("%d is not a prime number\n", num);
    
// To find the number of prime numbers between a given range
    printf("Input the starting number of range: ");
    scanf("%d", &stno);
    printf("Input the ending number of range: ");
    scanf("%d", &enno);
    printf("The prime numbers between %d and %d are: \n", stno, enno);
    for (int p = stno; p <= enno; p++)
    {
        count = prime_check(&p);
        if (count == 0 && p>1)
        {
            printf("%d ", p);
        }
    }
    printf("\n");
    return 0;
}
int prime_check(int *n)
{
    int ctr = 0;
    for (int i = 2; i <= *n / 2; i++)
    {
        if (*n % i == 0)
        {
            ctr++;
            break;
        }
    }
    return ctr;
}
