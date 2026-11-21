#include <stdio.h>

int main()
{
    long long n;
    int freq[10] = {0};

    scanf("%lld", &n);

    if(n < 0)
        n = -n;

    while(n > 0)
    {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    int found = 0;

    for(int i = 0; i < 10; i++)
    {
        if(freq[i] > 1)
        {
            printf("Digit %d appears %d times\n", i, freq[i]);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("No digit appears more than once");
    }

    return 0;
}





#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter number of seats: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d seat numbers:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int duplicateCount = 0;

    printf("\nSeat Number    Frequency\n");

    for(int i = 0; i < n; i++)
    {
        int visited = 0;

        /* check whether already appeared before */
        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                visited = 1;
                break;
            }
        }

        if(visited)
            continue;

        int freq = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                freq++;
            }
        }

        printf("%d\t\t%d\n", a[i], freq);

        if(freq > 1)
        {
            duplicateCount += (freq - 1);
        }
    }

    printf("\nNumber of duplicate entries = %d\n", duplicateCount);

    return 0;
}






