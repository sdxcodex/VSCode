#include <stdio.h>

struct Inventory
{
    char name[20];
    int number;
    float price;
    int quantity;
};

int main()
{
    FILE *fp;

    struct Inventory item[4] =
    {
        {"AAA-1",111,17.50,115},
        {"BBB-2",125,36.00,75},
        {"C-3",247,31.75,104},
        {"D-55",300,50.75,200}
    };

    fp = fopen("INVENTORY.txt","w");

    for(int i=0;i<4;i++)
    {
        fprintf(fp,"%s %d %.2f %d\n",
                item[i].name,
                item[i].number,
                item[i].price,
                item[i].quantity);
    }

    fclose(fp);

    fp = fopen("INVENTORY.txt","r");

    struct Inventory temp;

    int totalItems = 0;

    printf("\nInventory Table\n");
    printf("-------------------------------------------------\n");
    printf("Name\tNumber\tPrice\tQty\tValue\n");
    printf("-------------------------------------------------\n");

    while(fscanf(fp,"%s %d %f %d",
                 temp.name,
                 &temp.number,
                 &temp.price,
                 &temp.quantity)==4)
    {
        float value = temp.price * temp.quantity;

        printf("%s\t%d\t%.2f\t%d\t%.2f\n",
               temp.name,
               temp.number,
               temp.price,
               temp.quantity,
               value);

        totalItems += temp.quantity;
    }

    fclose(fp);

    fp = fopen("INVENTORY.txt","r");

    printf("\nItems having quantity > 100\n");

    while(fscanf(fp,"%s %d %f %d",
                 temp.name,
                 &temp.number,
                 &temp.price,
                 &temp.quantity)==4)
    {
        if(temp.quantity > 100)
        {
            printf("%s\n",temp.name);
        }
    }

    fclose(fp);

    printf("\nTotal number of items = %d\n",totalItems);

    return 0;
}