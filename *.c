// Get user input on tax and tip as percentages
// Create randon generator for the four meals
// Display meal cost, tax amount, tip amount, and total bill

#include <stdio.h>
#include <string.h>

int main() {

    //Declare the four variables
    float meal;
    float tax;
    float tip;
    float total;

    //Asking and taking input for meal cost
    printf("Enter meal cost: " );
    scanf("%f", &meal);

    //Asking and taking input for tax
    printf("Enter tax percent: ");
    scanf("%f", &tax);

    //Asking and taking input for tip
    printf("Enter tip percent: ");
    scanf("%f", &tip);

    //Separate input and outputs
    printf("------ Bill ------ \n");

    //Print meal cost
    printf("Meal Cost: $%.2f \n", meal);

    //Print tax amount
    printf("Tax amount: $%.2f \n", (tax/100) * meal );

    //Print tip amount
    printf("Tip amount: $%.2f \n", (tip/100) * meal );

    //Calculate and print total bill
    total = meal + (tax/100) * meal + (tip/100) * meal;
    printf("Total Bill: $%.2f \n", total );

    return 0;

}