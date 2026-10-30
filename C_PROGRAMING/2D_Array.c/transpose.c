#include <stdio.h>
int main () {
    int n;
    printf("Number of rows : ");
    scanf("%d",&n);
     int m;
    printf("Number of column : ");
    scanf("%d",&m);
    int a[n][m];
    for(int i =0;i<n;i++){

        for(int j =0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[m][n];
    for(int i =0;i<m;i++){

        for(int j =0;j<n;j++){
                b[i][j]=a[j][i];
        }
    }
     for(int i =0;i<m;i++){

        for(int j =0;j<n;j++){
           printf("%d",b[i][j]);
        }
        printf("\n");
    }


    return 0;
}
