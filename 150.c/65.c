#include <stdio.h>

int main() {
    int N;

    printf("Enter number of meter readings: ");
    scanf("%d", &N);

    int r[N];

    printf("Enter %d cumulative meter readings:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &r[i]);
    }

    int invalid = 0;
    int totalIncrease = 0;

    int maxIncrease = -1;
    int startInterval = -1, endInterval = -1;

    printf("\nConsumption between consecutive readings:\n");

    for (int i = 1; i < N; i++) {
        int diff = r[i] - r[i - 1];

        if (diff >= 0) {
            printf("Interval %d-%d : %d units\n", i, i + 1, diff);
            totalIncrease += diff;

            if (diff > maxIncrease) {
                maxIncrease = diff;
                startInterval = i;
                endInterval = i + 1;
            }
        } else {
            invalid = 1;
        }
    }

    if (!invalid) {
        printf("\nTotal Valid Increase = %d units\n", totalIncrease);
        printf("Largest Increase = %d units (Interval %d-%d)\n",
               maxIncrease, startInterval, endInterval);
    } else {
        printf("\nInvalid meter sequence detected.\n");
        printf("Problematic intervals:\n");

        for (int i = 1; i < N; i++) {
            if (r[i] < r[i - 1]) {
                printf("Interval %d-%d : %d -> %d (Decrease)\n",
                       i, i + 1, r[i - 1], r[i]);
            }
        }
    }

    return 0;
}