#include <stdio.h>

int main() {
    int n, m;

    printf("Number of rows : ");
    scanf("%d", &n);

    printf("Number of columns : ");
    scanf("%d", &m);

    int a[n][m];
    int b[n][m];

    printf("Enter matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = m - 1;

    int r = 0, c = 0;   // for traversing a[][]
    int count = 0;
    int total = n * m;

    while(count < total) {

        for(int i = minc; i <= maxc && count < total; i++) {
            b[minr][i] = a[r][c];

            c++;
            if(c == m) {
                c = 0;
                r++;
            }
            count++;
        }
        minr++;

        for(int i = minr; i <= maxr && count < total; i++) {
            b[i][maxc] = a[r][c];

            c++;
            if(c == m) {
                c = 0;
                r++;
            }
            count++;
        }
        maxc--;

        for(int i = maxc; i >= minc && count < total; i--) {
            b[maxr][i] = a[r][c];

            c++;
            if(c == m) {
                c = 0;
                r++;
            }
            count++;
        }
        maxr--;

        for(int i = maxr; i >= minr && count < total; i--) {
            b[i][minc] = a[r][c];

            c++;
            if(c == m) {
                c = 0;
                r++;
            }
            count++;
        }
        minc++;
    }

    printf("\nSpiral Matrix:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}