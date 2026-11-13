
#include <stdio.h>

int main()
{
    int N, C, i, code;
    int invalid = 0;
    int max = 0, second = -1, tie = 0;

    printf("Enter number of ballots and candidates: ");
    scanf("%d %d", &N, &C);

    int votes[C + 1];

    // Initialize array
    for (i = 1; i <= C; i++)
    {
        votes[i] = 0;
    }

    // Count votes
    for (i = 0; i < N; i++)
    {
        scanf("%d", &code);

        if (code >= 1 && code <= C)
        {
            votes[code]++;
        }
        else
        {
            invalid++;
        }
    }

    // Display vote counts
    printf("\nVote Counts:\n");

    for (i = 1; i <= C; i++)
    {
        printf("Candidate %d: %d votes\n", i, votes[i]);
    }

    printf("Invalid ballots: %d\n", invalid);

    // Find maximum votes
    for (i = 1; i <= C; i++)
    {
        if (votes[i] > max)
        {
            max = votes[i];
        }
    }

    // Check for no valid votes
    if (max == 0)
    {
        printf("No valid votes.\n");
        return 0;
    }

    // Find number of tied winners
    for (i = 1; i <= C; i++)
    {
        if (votes[i] == max)
        {
            tie++;
        }
    }

    // Display winner(s)
    printf("Winner(s): ");

    for (i = 1; i <= C; i++)
    {
        if (votes[i] == max)
        {
            printf("Candidate %d ", i);
        }
    }

    printf("\n");

    // Find second-highest distinct votes
    for (i = 1; i <= C; i++)
    {
        if (votes[i] < max && votes[i] > second)
        {
            second = votes[i];
        }
    }

    // Calculate margin
    if (tie > 1)
        printf("Margin: 0\n");
    else if (second == -1)
        printf("Margin: Not applicable\n");
    else
        printf("Margin: %d\n", max - second);

    return 0;
}
