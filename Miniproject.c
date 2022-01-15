#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct user
{
    char name[15];
    char address[50];
    unsigned long long number;
    char email[25];
    char username[10];
    char password[15];
};

struct shopowner
{
    unsigned long long number;
    char email[20];
};

struct item
{
    char name[9];
    int id;
    int mrp;
    int gst;
    float buy_price;
};
void contact_us();
void display();
void signin();
void signup()
{
    struct user user1, user2;
    FILE *f1;
    f1 = fopen("SignUpDetails.dat", "r");
    fflush(stdin);
    printf("Enter your name: ");
    gets(user1.name);
    printf("Enter your address: ");
    gets(user1.address);
    printf("Enter your mobile number: ");
    scanf("%llu", &user1.number);
    fflush(stdin);
    printf("Enter username: ");
    gets(user1.username);
    while (fread(&user2, sizeof(struct user), 1, f1))
    {
        while (strcmp(user1.username, user2.username) == 0)
        {
            fflush(stdin);
            printf("Username already exists!");

            printf("Enter again username: ");
            gets(user1.username);
        }
    }
    printf("Enter password: ");
    scanf("%s", user1.password);
    fclose(f1);
    f1 = fopen("SignUpDetails.dat", "a");
    fwrite(&user1, sizeof(struct user), 1, f1);
    fclose(f1);
}

void selectone(int n, int x)
{
    if (n == 0)
    {
        switch (x)
        {
        case 1:
            display();
            break;
        case 2:
            signup();
            break;
        case 3:
            signin();
            break;
        case 4:
            contact_us();
            break;
        default:
            printf("Error! Invalid Input\n");
            break;
        }
    }
    else
    {
        switch (x)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            contact_us();
            break;
            break;
        default:
            printf("Error! Invalid Input");
            break;
        }
    }
}

void menu(int n)
{
    int i, j, select;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 16; j++)
        {
            if (i == 0 || i == 11 || j == 0 || j == 15 && !((i == 2 || i == 4 || i == 5 || i == 6 || i == 7) && j == 15))
                printf("* ");
            else if (i == 2 && j == 4)
            {
                printf(" MENU:                *");
            }
            else if (i == 4 && j == 5)
            {
                printf("1.Display Items     *");
            }
            else if (i == 5 && j == 5)
            {
                if (n == 0)
                    printf("2.Sign Up\t      *");
                else
                    printf("2.Sign Out\t      *");
            }
            else if (i == 6 && j == 5)
            {
                if (n == 0)
                    printf("3.Sign In\t      *");
                else
                    printf("3.Cart\t\t*");
            }
            else if (i == 7 && j == 5)
                printf("4.Contact Us\t      *");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("Select one option of the above:");
    scanf("%d", &select);
    system("cls");
    if (n == 0)
        selectone(0, select);
    else
        selectone(1, select);
}
int main(void)
{
    int i, j, select;
    char temp;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 16; j++)
        {
            if (i == 0 || i == 11 || j == 0 || j == 15 && !(i == 5 && j == 15))
                printf("* ");
            else if (i == 5 && j == 4)
            {
                printf("Shopping Cart         *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("Press any key to continue: ");
    scanf("%c", &temp);
    system("cls");
    menu(0);
    return 0;
}
void signin()
{
    struct user user1, user_check;
    FILE *f1;
    f1 = fopen("SignUpDetails.dat", "r");
    if (f1 == NULL)
    {
        printf("You need to Sign In First");
        return;
    }
    printf("***SIGN IN***\n");
    printf("Enter username: ");
    scanf("%s", user1.username);
    printf("Enter password: ");
    scanf("%s", user1.password);
    while (fread(&user_check, sizeof(struct user), 1, f1))
    {
        if (strcmp(user1.username, user_check.username) == 0 &&
            strcmp(user1.password, user_check.password) == 0)
        {
            printf("Correct Username and Password\n");
            menu(1);
            return;
        }
        else
        {
            continue;
        }
    }
    printf("Please enter correct Username and Password\n");
}
void display()
{
}
void contact_us()
{
    FILE *f1;
    unsigned long long ph;
    char email[30] = {0};
    f1 = fopen("ShopOwnerDetails.txt", "r");
    printf("Contact Us:\n\n");
    fscanf(f1, "%s %llu", email, &ph);
    printf("Phone No: %llu\n", ph);
    printf("Email: %s\n", email);
    fclose(f1);
}