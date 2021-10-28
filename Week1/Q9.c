#include <stdio.h>

int main(void)
{
    int Phy, Che, Bio, Math, Comp;
    float per;
    printf("Enter the marks of Physics: ");
    scanf("%d", &Phy);
    printf("Enter the marks of Chemistry: ");
    scanf("%d", &Che);
    printf("Enter the marks of Biology: ");
    scanf("%d", &Bio);
    printf("Enter the marks of Mathematics: ");
    scanf("%d", &Math);
    printf("Enter the marks of Computer: ");
    scanf("%d", &Comp);
    per = ((Phy + Che + Bio + Math + Comp) / 500.0) * 100;
    printf("The percentage is %.2f\n", per);
    if (per >= 90)
    {
        printf("Grade A\n");
    }
    else if (per >= 80)
    {
        printf("Grade B\n");
    }
    else if (per >= 70)
    {
        printf("Grade C\n");
    }
    else if (per >= 60)
    {
        printf("Grade D\n");
    }
    else if (per >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}