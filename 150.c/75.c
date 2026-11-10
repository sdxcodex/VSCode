#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p[n], original[n], index[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        original[i] = p[i];
        index[i] = i;   // original arrival index
    }

    printf("Before Sorting:\n");
    for(int i = 0; i < n; i++)
    {
        printf("(%d,%d) ", p[i], index[i]);
    }

    // Stable Bubble Sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n-i - 1; j++)
        {
            if(p[j] > p[j + 1])
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;

                temp = index[j];
                index[j] = index[j + 1];
                index[j + 1] = temp;
            }
        }
    }

    int changed = 0;

    for(int i = 0; i < n; i++)
    {
        if(index[i] != i)
            changed++;
    }

    printf("\nAfter Sorting:\n");
    for(int i = 0; i < n; i++)
    {
        printf("(%d,%d) ", p[i], index[i]);
    }

    printf("\nRequests Changed Position = %d", changed);

    return 0;
}
