
#include <stdio.h>

int main()
{
    int N, K, i;

    printf("Enter N and K: ");
    scanf("%d %d", &N, &K);

    // Validate input
    if (N <= 0 || K <= 0)
    {
        printf("Invalid input.\n");
        return 0;
    }

    int active[N];

    // Initially all stations are active
    for (i = 0; i < N; i++)
    {
        active[i] = 1;
    }

    int remaining = N;
    int pos = 0;
    int count = 0;

    printf("Elimination order: ");

    while (remaining > 1)
    {
        if (active[pos] == 1)
        {
            count++;

            if (count == K)
            {
                printf("%d ", pos + 1);

                active[pos] = 0;
                remaining--;

                count = 0;
            }
        }

        // Move to next position circularly
        pos = (pos + 1) % N;
    }

    // Find surviving workstation
    for (i = 0; i < N; i++)
    {
        if (active[i] == 1)
        {
            printf("\nSurviving workstation: %d\n", i + 1);
            break;
        }
    }

    return 0;
}
