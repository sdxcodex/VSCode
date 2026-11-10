#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int T;
    scanf("%d", &T);

    int successDays = 0;

    int currLen = 0, currStart = 0;
    int maxLen = 0, maxStart = -1, maxEnd = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= T)
        {
            successDays++;

            if(currLen == 0)
                currStart = i + 1;   // day number (1-based)

            currLen++;

            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxStart = currStart;
                maxEnd = i + 1;
            }
        }
        else
        {
            currLen = 0;
        }
    }

    printf("Successful Days = %d\n", successDays);

    if(maxLen == 0)
    {
        printf("No Successful Streak");
    }
    else
    {
        printf("Longest Streak = %d\n", maxLen);
        printf("Start Day = %d\n", maxStart);
        printf("End Day = %d\n", maxEnd);
    }

    return 0;
}