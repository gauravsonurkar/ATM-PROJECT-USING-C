//using c language ATM program project

#include <stdio.h>

int main()
{
    int pin, atm, balance = 20000;
    int amount, withdraw, diposit, new_balance;

    printf("Welcome to the ATM services \n ");
    printf("\n");
    printf("\n");
    printf("Enter the pin number for next steps = ");
    scanf("%d", &pin);
    printf("\n");
    printf("\n");
    if (pin == 1234 || 1162 || 1234 || 4323 || 1233)
    {

        printf("How can I help you what services do you want list is below \n");
        printf("\n");

        printf("Enter  1 for the display bank balance \n");
        printf("Enter  2 for the  withdraw \n");
        printf("Enter  3 for the  diposit \n");
        printf("\n");
        printf("\n");
        printf("\n");

        printf("Enter the case = ");
        scanf("%d", &atm);
        printf("\n");

        switch (atm)
        {
        case 1:
            printf("The balance of the account is %d $ \n ", balance);
            break;
        case 2:
            printf("Enter Withdraw ammount  = ");
            scanf("%d", &amount);
            withdraw = balance - amount;
            printf("U succesfully Withdraw your money of %d $ Your current balance is %d $ \n ", amount, withdraw);

            break;
        case 3:
            printf("How many money do you want to diposit = ");
            scanf("%d", &diposit);
            new_balance = balance + diposit;
            printf("You diposted money is %d $ & New balance of the account is  %d $ \n ", diposit, new_balance);
            break;

        default:
            printf("Sorry you entered the wrong case ");
            break;
        }
    }
    else
    {
        printf("You entered the wrong pin number ...\n");
    }

    printf("Thank you for using our atm service ");

    return 0;
}