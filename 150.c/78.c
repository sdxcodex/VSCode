#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];   // copy original array
    }

    printf("Spikes at positions: ");

    int found = 0;

    for(int i = 1; i < n - 1; i++)
    {
        if(a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            printf("%d ", i);
            found = 1;

            // replacement based on ORIGINAL array
            b[i] = (a[i - 1] + a[i + 1]) / 2;
        }
    }

    if(!found)
        printf("None");

    printf("\nRevised Array:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}