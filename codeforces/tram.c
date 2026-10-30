


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int curr = 0;
    int mx = 0;

    for(int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        curr -= a;
        curr += b;

        if(curr > mx)
            mx = curr;
    }

    printf("%d", mx);

    return 0;
}