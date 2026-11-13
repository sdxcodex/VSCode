
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of students");
        return 0;
    }

    int a[n];

    printf("Enter scores:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Find three distinct highest scores
    for(i = 0; i < n; i++)
    {
        if(a[i] == first || a[i] == second || a[i] == third)
            continue;

        if(a[i] > first)
        {
            third = second;
            second = first;
            first = a[i];
        }
        else if(a[i] > second)
        {
            third = second;
            second = a[i];
        }
        else if(a[i] > third)
        {
            third = a[i];
        }
    }

    // Count distinct score levels
    if(first != INT_MIN) found++;
    if(second != INT_MIN) found++;
    if(third != INT_MIN) found++;

    printf("\n");

    if(found >= 1)
    {
        printf("Highest score: %d\n", first);
        printf("Indices: ");

        for(i = 0; i < n; i++)
            if(a[i] == first)
                printf("%d ", i);
    }

    if(found >= 2)
    {
        printf("\nSecond highest score: %d\n", second);
        printf("Indices: ");

        for(i = 0; i < n; i++)
            if(a[i] == second)
                printf("%d ", i);
    }

    if(found >= 3)
    {
        printf("\nThird highest score: %d\n", third);
        printf("Indices: ");

        for(i = 0; i < n; i++)
            if(a[i] == third)
                printf("%d ", i);
    }

    if(found < 3)
        printf("\nOnly %d distinct score levels exist.\n", found);

    return 0;
}
