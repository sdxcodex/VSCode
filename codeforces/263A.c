#include <stdio.h>

int main() {
    int matrix[5][5];
    int r = 0, c = 0;
    
    // Read the 5x5 matrix and find the position of 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                r = i + 1; // Converting 0-index to 1-index
                c = j + 1;
            }
        }
    }
    
    // Calculate row difference using standard if-else
    int row_diff;
    if (r - 3 > 0) {
        row_diff = r - 3;
    } else {
        row_diff = 3 - r;
    }
    
    // Calculate column difference using standard if-else
    int col_diff;
    if (c - 3 > 0) {
        col_diff = c - 3;
    } else {
        col_diff = 3 - c;
    }
    
    int moves = row_diff + col_diff;
    
    // Print the minimum moves
    printf("%d\n", moves);
    
    return 0;
}