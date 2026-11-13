#include <stdio.h>

int main()
{
    int choice;
    int qty;
    float price;
    float totalSales = 0;
    int validOrders = 0;

    do
    {
        printf("\n1. Place Order\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter quantity and unit price: ");
                scanf("%d%f", &qty, &price);

                if(qty <= 0 || price <= 0)
                {
                    printf("Invalid quantity or price\n");
                    break;
                }

                totalSales += qty * price;
                validOrders++;

                printf("Order Amount = %.2f\n", qty * price);
                break;

            case 2:
                printf("Closing Counter...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 2);

    float discount = 0;

    if(totalSales > 5000)
    {
        discount = totalSales * 0.10;
    }

    printf("\n----- CLOSING REPORT -----\n");
    printf("Valid Orders : %d\n", validOrders);
    printf("Gross Sales  : %.2f\n", totalSales);
    printf("Discount     : %.2f\n", discount);
    printf("Net Sales    : %.2f\n", totalSales - discount);

    return 0;
}