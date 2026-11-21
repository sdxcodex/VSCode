#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==j || j==n-1-i){
                int temp =a[i][j];
                a[i][j] = b[i][j];
                b[i][j] = temp;
            }
        }
    }
    printf("\n");
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }






return 0;

}