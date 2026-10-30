#include <stdio.h>

int main() {
    int n;
    
    // Accept the size N from the user
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    
    int a[n][n];
    int current_seat = 1;

    // 1. Automatically generate the seating arrangement in a snake-like pattern
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even rows (0, 2, 4...): Fill from left to right
            for (int j = 0; j < n; j++) {
                a[i][j] = current_seat++;
            }
        } else {
            // Odd rows (1, 3, 5...): Fill from right to left
            for (int j = n - 1; j >= 0; j--) {
                a[i][j] = current_seat++;
            }
        }
    }

    // 2. Print the matrix neatly formatted as a grid
    printf("Seating Arrangement Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n"); // Newline after each row finishes printing
    }

    // 3. Calculate the sum of both diagonals
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Main diagonal (i == j) or Anti-diagonal (i + j == n - 1)
            // When N is odd, the center seat satisfies both conditions simultaneously, 
            // but the 'if' condition combined with a single accumulator automatically counts it only once.
            if (i == j || (i + j == n - 1)) {
                sum += a[i][j];
            }
        }
    }

    // Output the final diagonal sum
    printf("\nSum of both diagonals: %d\n", sum);

    return 0;
}