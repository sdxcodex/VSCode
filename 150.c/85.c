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

    int comparisons = 0;
    int swaps = 0;
    int terminatedPass = 0;
    int alreadySorted = 1;

    for(int pass = 0; pass < n - 1; pass++)
    {
        int swapped = 0;

        for(int i = 0; i < n - 1 - pass; i++)
        {
            comparisons++;

            if(a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;

                swaps++;
                swapped = 1;
            }
        }

        printf("After Pass %d: ", pass + 1);
        for(int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");

        if(swapped)
            alreadySorted = 0;

        if(!swapped)
        {
            terminatedPass = pass + 1;
            break;
        }
    }

    if(terminatedPass == 0)
        terminatedPass = n - 1;

    printf("\nTotal Comparisons = %d\n", comparisons);
    printf("Total Swaps = %d\n", swaps);
    printf("Algorithm Terminated On Pass = %d\n", terminatedPass);

    if(alreadySorted)
        printf("Original input was already sorted.\n");
    else
        printf("Original input was not already sorted.\n");

    printf("Final Sorted Array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}