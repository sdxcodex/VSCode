#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of days: ");
    scanf("%d", &n);

    int change[n];

    printf("Enter daily stock changes:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &change[i]);
    }

    int openingStock;
    printf("Enter opening stock: ");
    scanf("%d", &openingStock);

    if(openingStock < 0)
    {
        printf("Invalid opening stock.\n");
        return 0;
    }

    int reorderLevel;
    printf("Enter reorder level: ");
    scanf("%d", &reorderLevel);

    int stock = openingStock;

    printf("\nDaily Stock Balance:\n");

    int cumulative = 0;
    int minCumulative = 0;

    int negativeFound = 0;

    for(int i = 0; i < n; i++)
    {
        stock += change[i];

        cumulative += change[i];

        if(cumulative < minCumulative)
        {
            minCumulative = cumulative;
        }

        printf("Day %d : Stock = %d\n", i + 1, stock);

        if(stock < reorderLevel)
        {
            printf("   Reorder warning on Day %d\n", i + 1);
        }

        if(stock < 0)
        {
            printf("   INVALID STATE: Negative stock on Day %d\n",
                   i + 1);
            negativeFound = 1;
        }
    }

    int minimumOpening;

    if(minCumulative < 0)
    {
        minimumOpening = -minCumulative;
    }
    else
    {
        minimumOpening = 0;
    }

    printf("\nMinimum opening stock required = %d\n",
           minimumOpening);

    if(!negativeFound)
    {
        printf("No negative stock occurred.\n");
    }

    return 0;
}