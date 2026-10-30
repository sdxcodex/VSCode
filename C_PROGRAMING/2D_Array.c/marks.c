#include <stdio.h>
int main () {
    int n;
    printf("Number of stdents : ");
    scanf("%d",&n);
    int a[n][2];
    for(int i =0;i<n;i++){

        for(int j =0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }

     for(int i =0;i<n;i++){

        for(int j =0;j<2;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    









    return 0;
}