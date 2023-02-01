#include <stdio.h>

void menu();
void bill(float meal_cost);

int main()
{
    int choice;
    float meal_cost;

    menu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 3)
    {
        switch (choice)
        {
            case 1:
                printf("Enter the cost of the meal: $");
                scanf("%f", &meal_cost);
                bill(meal_cost);
                break;

            case 2:
                menu();
                break;

            default:
                printf("Invalid option, please try again.\n");
        }
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    }
    printf("\nThank you for using our billing system!\n");

    return 0;
}

void menu()
{
    printf("\nWelcome to the restaurant billing system\n");
    printf("1. Generate bill\n");
    printf("2. Show menu\n");
    printf("3. Exit\n");
}

void bill(float meal_cost)
{
    float tax, tip, total;

    tax = meal_cost * 0.07;
    tip = (meal_cost + tax) * 0.2;
    total = meal_cost + tax + tip;

    printf("\nMeal cost: $%.2f\n", meal_cost);
    printf("Tax: $%.2f\n", tax);
    printf("Tip: $%.2f\n", tip);
    printf("Total: $%.2f\n", total);
}
