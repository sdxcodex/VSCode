
#include <stdio.h>

int main()
{
    int N, i;
    
    printf("Enter number of readings: ");
    scanf("%d", &N);

    int a[N];

    printf("Enter readings:\n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int start = 0;
    int maxStart = 0;
    int currentLen = 1;
    int maxLen = 1;

    // Find longest increasing run
    for (i = 1; i < N; i++)
    {
        if (a[i] > a[i - 1])
        {
            currentLen++;
        }
        else
        {
            currentLen = 1;
            start = i;
        }

        // Update longest run
        if (currentLen > maxLen)
        {
            maxLen = currentLen;
            maxStart = start;
        }
    }

    // Display result
    printf("\nLongest increasing run:\n");

    printf("Start index: %d\n", maxStart);
    printf("End index: %d\n", maxStart + maxLen - 1);
    printf("Length: %d\n", maxLen);

    printf("Elements: ");

    for (i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
