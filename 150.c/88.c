
#include <stdio.h>

int main()
{
    int L, U, G, i, j, num;
    int flag, count = 0;
    int gap, maxGap = 0, alerts = 0;

    printf("Enter lower bound, upper bound and G: ");
    scanf("%d %d %d", &L, &U, &G);

    int prime[U - L + 1];

    // Find prime numbers
    for (num = L; num <= U; num++)
    {
        if (num < 2)
            continue;

        flag = 0;

        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            prime[count] = num;
            count++;
        }
    }

    // Check if at least two primes exist
    if (count < 2)
    {
        printf("Fewer than two primes found.\n");
        printf("Maximum gap: 0\n");
        printf("Number of alerts: 0\n");
        return 0;
    }

    // Find consecutive prime gaps
    for (i = 0; i < count - 1; i++)
    {
        gap = prime[i + 1] - prime[i];

        printf("%d and %d: Gap = %d",
               prime[i], prime[i + 1], gap);

        if (gap > G)
        {
            printf(" ALERT");
            alerts++;
        }

        printf("\n");

        if (gap > maxGap)
        {
            maxGap = gap;
        }
    }

    printf("\nMaximum gap: %d\n", maxGap);
    printf("Number of alerts: %d\n", alerts);

    return 0;
}
