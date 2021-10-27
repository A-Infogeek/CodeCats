#include <stdio.h>

int main(void)
{
    int amt;
    // Input the amount
    printf("Enter an amount: ");
    scanf("%d", &amt);
    // Making a array for assigning the inputs
    int notes[12];
    // Array for the notes denomination required
    int note_denomination[6] = {2000, 500, 100, 50, 20, 10};
    //Intializing the amount inputted to notes[0]
    notes[0] = amt;
    // Loop for finding the notes required for each and leftover by same
    for (int i = 0; i < 6; i++)
    {
        notes[2 * i + 1] = notes[i * 2] / note_denomination[i];
        notes[2 * i + 2] = notes[i * 2] % note_denomination[i];
        printf("%d notes denomination is %d\n", note_denomination[i], notes[2 * i + 1]);
    }

    return 0;
}