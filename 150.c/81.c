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

    int j = 0;   // position for unique elements

    printf("ID Frequencies:\n");

    for(int i = 0; i < n; )
    {
        int count = 1;

        while(i + count < n && a[i] == a[i + count])
        {
            count++;
        }

        a[j] = a[i];
        j++;

        printf("%d -> %d\n", a[i], count);

        i += count;
    }

    printf("\nCompressed Length = %d\n", j);

    printf("Compressed Array: ");
    for(int i = 0; i < j; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEntries Removed = %d\n", n - j);

    return 0;
}