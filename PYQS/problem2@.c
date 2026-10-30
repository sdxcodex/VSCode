#include <stdio.h>
int main () {
    int N=7,X=3;
    int a[7] ={8,2,5,1,9,4,7};
    int sum=0,max=0;
    for(int i =0;i<5;i++){
        sum = a[i]+a[i+1] +a[i+2];
        if()
    }










    return 0;
}


#include <stdio.h>

int main() {
    int n, k, i, j;
    int a[100];

    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int maxSum = -999999;
    int start = 0;

    for (i = 0; i < n; i++) {
        int sum = 0;

        for (j = 0; j < k; j++) {
            sum += a[(i + j) % n];
        }

        if (sum > maxSum) {
            maxSum = sum;
            start = i;
        }
    }

    printf("Maximum sum = %d\n", maxSum);
    printf("Starting index = %d\n", start);

    printf("Elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", a[(start + i) % n]);
    }

    return 0;
}