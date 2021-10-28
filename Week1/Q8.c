#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    float root1, root2, imaginary, discriminant;
    printf("A Quadratic Equation is of the form ax^2+bx+c\n");
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    discriminant = (b * b - 4 * a * c);
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct roots exist i.e. %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Two equal roots exist i.e. %.2f and %.2f\n", root1, root2);
    }
    else
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("Two imaginary roots exist i.e. %.2f+ %.2fi and %.2f-i %.2fi\n", root1, imaginary, root2, imaginary);
    }

    return 0;
}