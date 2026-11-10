#include <stdio.h>

int main()
{
    int n, capacity;

    scanf("%d%d", &n, &capacity);

    int a[capacity];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Verify ascending order
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1])
        {
            printf("Array not sorted");
            return 0;
        }
    }

    // Capacity check
    if(n == capacity)
    {
        printf("Capacity Error");
        return 0;
    }

    int x;
    scanf("%d", &x);

    // Duplicate check
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Duplicate Entry");
            return 0;
        }
    }

    // Find insertion position
    int pos = n;

    for(int i = 0; i < n; i++)
    {
        if(x < a[i])
        {
            pos = i;
            break;
        }
    }

    // Shift right
    for(int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    n++;

    // Print updated array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}