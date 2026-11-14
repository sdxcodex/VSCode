#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int L, R;
    scanf("%d %d", &L, &R);

    if(L < 0 || R < 0 || L >= n || R >= n || L > R) {
        printf("Invalid indices");
        return 0;
    }

    int left = L;
    int right = R;

    while(left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    printf("Modified array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    int palindrome = 1;

    for(int i = 0; i < n/2; i++) {
        if(a[i] != a[n-1-i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}