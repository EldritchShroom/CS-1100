#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bet_amount, random_number = 0;
    int quarter_amount = 80;
    float balance = 20;
printf("Welcome to the Betting Game!\n""You have $20 worth of quarters.\n");

    while (quarter_amount != 0)
    {
        balance = quarter_amount / 4;
        random_number = rand() % 100;

        printf("\n");
        printf("You have %d quarters ($%.2f).\n", quarter_amount, balance);

        printf("Enter the number of quarters to bet (or 0 to cash out): ");
        scanf("%d", &bet_amount);

        if (bet_amount == 0)
        {
            printf("Cashing out. You ended with $%.2f.\n", balance);
            break;
        }
        else if (bet_amount > quarter_amount)
        {
            printf("Invalid bet. Please enter a valid number of quarters.\n");
        }
        else 
        {
            printf("Reel stopped on the number: %d\n", random_number);
            
            if (random_number < 50)
            {
                quarter_amount = quarter_amount - bet_amount;
                printf("You lose!\n");
                printf("\n");
            }
            else if (random_number > 74 && random_number <= 94)
            {
                quarter_amount = quarter_amount + (bet_amount * 2);
                printf("You double your money!\n");
                printf("\n");
            }
            else if (random_number > 94 && random_number <= 100)
            {
                quarter_amount = quarter_amount + (bet_amount * 3);
                printf("Jackpot! You triple your money!\n");
                printf("\n");
            }
            else
            {
                printf("You get your money back!\n");
            }
        }
    }
    return(1);
}