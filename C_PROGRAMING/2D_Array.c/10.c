#include <stdio.h>
int main () {
    int n;
    printf("Number of stdents : ");
    scanf("%d",&n);
    int a[n][n];
    // for(int i =0;i<n;i++){

    //     for(int j =0;j<2;j++){
            
    //     }
    // }

     for(int i =0;i<n;i++){

        for(int j =0;j<n;j++){
            a[i][j]=10;
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    









    return 0;
}