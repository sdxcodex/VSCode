#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int marks[n];
    int max = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);

        if(marks[i] > max)
            max = marks[i];
    }

    printf("Original Maximum = %d\n", max);

    // if(max == 0)
    // {
    //     printf("Scaled Marks:\n");

    //     for(int i = 0; i < n; i++)
    //     {
    //         printf("0.00 ");
    //     }

    //     printf("\nStudents with Scaled Marks >= 75 = 0");
    //     return 0;
    // }

    int count = 0;

    printf("Scaled Marks:\n");

    for(int i = 0; i < n; i++)
    {
        double scaled = (marks[i] * 100.0) / max;

        printf("%.2lf ", scaled);

        if(scaled >= 75.0)
            count++;
    }

    printf("\nStudents with Scaled Marks >= 75 = %d", count);

    return 0;
}