
#include <stdio.h>

int main()
{
    int n, i;
    double threshold, mean, deviation;
    long long sum = 0, revisedSum = 0;
    int outliers = 0, remaining = 0;

    printf("Enter number of entries: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    int a[n];

    printf("Enter profit/loss values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Enter threshold: ");
    scanf("%lf", &threshold);

    if(threshold < 0)
    {
        printf("Invalid threshold\n");
        return 0;
    }

    // Calculate original mean
    mean = (double)sum / n;

    printf("\nOriginal mean: %.2f\n", mean);

    printf("Outlier indices: ");

    // Identify outliers
    for(i = 0; i < n; i++)
    {
        deviation = a[i] - mean;

        if(deviation < 0)
            deviation = -deviation;

        if(deviation > threshold)
        {
            printf("%d ", i);
            outliers++;
        }
        else
        {
            revisedSum += a[i];
            remaining++;
        }
    }

    printf("\nNumber of outliers: %d\n", outliers);

    // Calculate revised average
    if(remaining == 0)
    {
        printf("All entries are excluded.\n");
        printf("Revised average cannot be calculated.\n");
    }
    else
    {
        printf("Revised average: %.2f\n",
               (double)revisedSum / remaining);
    }

    return 0;
}
