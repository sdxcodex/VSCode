
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Repeated elements: ");

    for (i = 0; i < n; i++) {
        int count = 0;

        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                count = 1;
                break;
            }
        }

        if (count == 1) {
            continue;
        }

        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}
