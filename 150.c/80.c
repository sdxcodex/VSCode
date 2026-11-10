#include <stdio.h>

int main()
{
    int opening, n, reorder;

    scanf("%d", &opening);
    scanf("%d", &n);

    int change[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &change[i]);
    }

    scanf("%d", &reorder);

    int stock = opening;
    int negative = 0;

    printf("Daily Balances:\n");

    for(int i = 0; i < n; i++)
    {
        stock += change[i];

        printf("Day %d: %d\n", i + 1, stock);

        if(stock < 0)
            negative = 1;
    }

    printf("\nDays Below Reorder Level:\n");

    stock = opening;
    int found = 0;

    for(int i = 0; i < n; i++)
    {
        stock += change[i];

        if(stock < reorder)
        {
            printf("Day %d\n", i + 1);
            found = 1;
        }
    }

    if(!found)
        printf("None\n");

    if(negative)
        printf("\nWarning: Negative stock occurred during simulation.\n");

    /* Minimum opening stock required */

    int prefix = 0;
    int minPrefix = 0;

    for(int i = 0; i < n; i++)
    {
        prefix += change[i];

        if(prefix < minPrefix)
            minPrefix = prefix;
    }

    int minOpening;

    if(minPrefix >= 0)
        minOpening = 0;
    else
        minOpening = -minPrefix;

    printf("Minimum Opening Stock Required = %d\n", minOpening);

    return 0;
}