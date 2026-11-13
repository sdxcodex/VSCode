#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[n], B[n], D[n];
    int threshold;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        if(A[i] < 0)
        {
            printf("Invalid stock entry\n");
            return 0;
        }
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);

        if(B[i] < 0)
        {
            printf("Invalid stock entry\n");
            return 0;
        }
    }

    scanf("%d", &threshold);

    int totalA = 0, totalB = 0;

    for(int i = 0; i < n; i++)
    {
        D[i] = A[i] - B[i];

        totalA += A[i];
        totalB += B[i];
    }

    printf("Difference Array:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", D[i]);
    }

    printf("\n");

    printf("Products exceeding threshold:\n");

    int found = 0;

    for(int i = 0; i < n; i++)
    {
        int diff = D[i];

        if(diff < 0)
            diff = -diff;

        if(diff > threshold)
        {
            printf("Product %d\n", i);
            found = 1;
        }
    }

    if(!found)
        printf("None\n");

    printf("Total Branch 1 Stock = %d\n", totalA);
    printf("Total Branch 2 Stock = %d\n", totalB);

    if(totalA > totalB)
        printf("Branch 1 has larger total stock\n");
    else if(totalB > totalA)
        printf("Branch 2 has larger total stock\n");
    else
        printf("Tie\n");

    return 0;
}