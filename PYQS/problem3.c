#include <stdio.h>

int main() {
    int n;
    
    printf("Enter N: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[100];
    printf("Enter transactions: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int insert_pos = 0;

    // Step 1: Identify suspicious transactions and shift them to the front in-place
    for (int i = 0; i < n; i++) {
        int is_suspicious = 0;

        if (n == 1) {
            is_suspicious = 0;
        } else if (i == 0) {
            if (arr[0] > arr[1]) {
                is_suspicious = 1;
            }
        } else if (i == n - 1) {
            if (arr[n - 1] > arr[n - 2]) {
                is_suspicious = 1;
            }
        } else {
            if (arr[i] > (arr[i - 1] + arr[i + 1])) {
                is_suspicious = 1;
            }
        }

        // If suspicious, shift elements to make room and place it at 'insert_pos'
        if (is_suspicious) {
            int val = arr[i];
            for (int j = i; j > insert_pos; j--) {
                arr[j] = arr[j - 1];
            }
            arr[insert_pos] = val;
            insert_pos++;
        }
    }

    // Step 2: Sort the suspicious elements (from index 0 to insert_pos - 1) in descending order
    for (int i = 0; i < insert_pos - 1; i++) {
        for (int j = i + 1; j < insert_pos; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the final modified array
    printf("Modified Transactions: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}