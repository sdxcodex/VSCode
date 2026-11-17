#include <stdio.h>

#define MAX 100

int main()
{
    int id[MAX], stock[MAX];
    int n;
    
    printf("Enter number of products: ");
    scanf("%d", &n);

    if(n < 0 || n > MAX)
    {
        printf("Invalid size");
        return 0;
    }

    printf("Enter Product ID and Stock:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &id[i], &stock[i]);
    }

    int successfulSales = 0;
    int totalUnitsSold = 0;

    int choice;

    do
    {
        printf("\n1.Receive Stock");
        printf("\n2.Sell Stock");
        printf("\n3.Insert Product");
        printf("\n4.Delete Product");
        printf("\n5.Display Inventory");
        printf("\n6.Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:
        {
            int pid, qty;
            printf("Enter Product ID and Quantity: ");
            scanf("%d %d", &pid, &qty);

            if(pid <= 0 || qty <= 0)
            {
                printf("Invalid input");
                break;
            }

            int pos = -1;

            for(int i = 0; i < n; i++)
            {
                if(id[i] == pid)
                {
                    pos = i;
                    break;
                }
            }

            if(pos == -1)
                printf("Invalid Product ID");
            else
            {
                stock[pos] += qty;
                printf("Stock Updated");
            }

            break;
        }

        case 2:
        {
            int pid, qty;

            printf("Enter Product ID and Quantity: ");
            scanf("%d %d", &pid, &qty);

            if(pid <= 0 || qty <= 0)
            {
                printf("Invalid input");
                break;
            }

            int pos = -1;

            for(int i = 0; i < n; i++)
            {
                if(id[i] == pid)
                {
                    pos = i;
                    break;
                }
            }

            if(pos == -1)
            {
                printf("Invalid Product ID");
            }
            else if(stock[pos] < qty)
            {
                printf("Insufficient Stock");
            }
            else
            {
                stock[pos] -= qty;

                successfulSales++;
                totalUnitsSold += qty;

                printf("Sale Successful");
            }

            break;
        }

        case 3:
        {
            if(n == MAX)
            {
                printf("Inventory Full");
                break;
            }

            int pid, qty;

            printf("Enter Product ID and Stock: ");
            scanf("%d %d", &pid, &qty);

            if(pid <= 0 || qty < 0)
            {
                printf("Invalid input");
                break;
            }

            int exists = 0;

            for(int i = 0; i < n; i++)
            {
                if(id[i] == pid)
                {
                    exists = 1;
                    break;
                }
            }

            if(exists)
            {
                printf("Product Already Exists");
                break;
            }

            int pos = 0;

            while(pos < n && id[pos] < pid)
                pos++;

            for(int i = n; i > pos; i--)
            {
                id[i] = id[i - 1];
                stock[i] = stock[i - 1];
            }

            id[pos] = pid;
            stock[pos] = qty;

            n++;

            printf("Product Inserted");

            break;
        }

        case 4:
        {
            int pid;

            printf("Enter Product ID: ");
            scanf("%d", &pid);

            int pos = -1;

            for(int i = 0; i < n; i++)
            {
                if(id[i] == pid)
                {
                    pos = i;
                    break;
                }
            }

            if(pos == -1)
            {
                printf("Invalid Product ID");
            }
            else if(stock[pos] != 0)
            {
                printf("Product Cannot Be Deleted");
            }
            else
            {
                for(int i = pos; i < n - 1; i++)
                { 
                    id[i] = id[i + 1];
                    stock[i] = stock[i + 1];
                }

                n--;

                printf("Product Deleted");
            }

            break;
        }

        case 5:
        {
            printf("\nInventory:\n");

            printf("ID\tStock\n");

            for(int i = 0; i < n; i++)
            {
                printf("%d\t%d\n", id[i], stock[i]);
            }

            break;
        }

        case 6:
        {
            printf("\nSuccessful Sales = %d", successfulSales);
            printf("\nTotal Units Sold = %d", totalUnitsSold);
            break;
        }

        default:
            printf("Invalid Choice");
        }

    } while(choice != 6);

    return 0;
}
