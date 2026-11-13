
#include <stdio.h>

int main()
{
    long long num, temp;
    int freq[10] = {0};
    int digit, i;
    int max = 0, maxDigit = 0;
    int flag = 0;

    printf("Enter transaction ID: ");
    scanf("%lld", &num);

    // Validate positive ID
    if (num < 0)
    {
        printf("Invalid transaction ID.\n");
        return 0;
    }

    temp = num;

    // Special case for zero
    if (temp == 0)
    {
        freq[0]++;
    }

    // Count digit frequencies
    while (temp > 0)
    {
        digit = temp % 10;
        freq[digit]++;

        temp = temp / 10;
    }

    // Display frequencies
    printf("\nDigit frequencies:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d = %d\n", i, freq[i]);
    }

    // Find most frequent digit
    for (i = 0; i < 10; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            maxDigit = i;
        }
    }

    printf("\nMost frequent digit: %d\n", maxDigit);
    printf("Frequency: %d\n", max);

    // Check if any digit occurs at least 3 times
    for (i = 0; i < 10; i++)
    {
        if (freq[i] >= 3)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Flagged ID: YES\n");
    else
        printf("Flagged ID: NO\n");

    return 0;
}
