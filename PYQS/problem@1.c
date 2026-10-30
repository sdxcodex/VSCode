#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;
    int spa = N - 1;

    for (int i = 1; i <= N; i++) {

        // Spaces for triangle alignment
        for (int j = 1; j <= spa; j++) {
            printf(" ");
        }

        // Decreasing sequence
        for (int k = i; k >= 1; k--) {
            printf("%d ", k);
        }

        // Increasing sequence
        for (int k = 2; k <= i; k++) {
            printf("%d ", k);
        }

        // Sum only the final row (matches the printed sequence exactly)
        if (i == N) {
            // Sum of decreasing part (i down to 1)
            for (int k = i; k >= 1; k--) {
                sum += k;
            }
            // Sum of increasing part (2 up to i)
            for (int k = 2; k <= i; k++) {
                sum += k;
            }
        }

        spa--;
        printf("\n");
    }

    printf("Sum = %d\n", sum);

    if (sum % 2 == 0) {
        printf("Sum is even\n");
    } else {
        printf("Sum is odd\n");
    }

    return 0;
}