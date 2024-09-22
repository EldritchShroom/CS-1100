// Include necessary header files
#include <stdio.h>   // Provides input/output functions
#include <string.h>  // Provides string manipulation functions

// Define constants for clothing item prices using macros
#define SHIRT_PRICE 19.99
#define SHOE_PRICE 49.99
#define PANTS_PRICE 29.99

int main(void) {
    // Declare variables
    char userInput[20];  // Array to store user input for clothing type
    int shirtQuantity = 0, shoeQuantity = 0, pantsQuantity = 0;  // Variables to store quantities of each clothing item
    
    do {
        // Display menu options to the user
        printf("Enter the type of clothing needed (shirt, shoes, pants).\n");
        printf("Type 'exit' to quit and calculate the total cost.\n");

        // Read user input for clothing type
        scanf("%s", userInput);

        // Check user input and prompt for quantity based on clothing type
        if (strcmp(userInput, "shirt") == 0) {
            printf("Enter the quantity of shirts needed: ");
            scanf("%d", &shirtQuantity);
        } else if (strcmp(userInput, "shoes") == 0) {
            printf("Enter the quantity of shoes needed: ");
            scanf("%d", &shoeQuantity);
        } else if (strcmp(userInput, "pants") == 0) {
            printf("Enter the quantity of pants needed: ");
            scanf("%d", &pantsQuantity);
        } else if (strcmp(userInput, "exit") != 0) {
            // If user input is not a valid clothing type or 'exit', display an error message and continue the loop
            printf("Invalid clothing type. Please enter 'shirt', 'shoes', or 'pants'.\n");
            continue;
        }

        // If user input is not 'exit', display a success message for adding the clothing item
        if (strcmp(userInput, "exit") != 0) {
            printf("Clothing item '%s' added successfully.\n", userInput);
        }
    } while (strcmp(userInput, "exit") != 0);  // Repeat the loop until user enters 'exit'

    // Calculate the total cost based on quantities and prices of each clothing item
    float totalCost = (shirtQuantity * SHIRT_PRICE) + (shoeQuantity * SHOE_PRICE) + (pantsQuantity * PANTS_PRICE);

    // Display the formatted bill
    printf("\nClothing Item\tQuantity\tPrice\t\tTotal\n");
    printf("-------------------------------------------------------\n");
    printf("Shirts\t\t%d\t\t$%.2f\t\t$%.2f\n", shirtQuantity, SHIRT_PRICE, shirtQuantity * SHIRT_PRICE);
    printf("Shoes\t\t%d\t\t$%.2f\t\t$%.2f\n", shoeQuantity, SHOE_PRICE, shoeQuantity * SHOE_PRICE);
    printf("Pants\t\t%d\t\t$%.2f\t\t$%.2f\n", pantsQuantity, PANTS_PRICE, pantsQuantity * PANTS_PRICE);
    printf("-------------------------------------------------------\n");
    printf("Total Cost:\t\t\t\t\t$%.2f\n", totalCost);

    return 0;  // Indicate successful program execution
}