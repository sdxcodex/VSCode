#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(a[i][j]!=a[j][i]){
            x =1;
            break;
            }
        }
    }
    if(x){
        printf("matrix are asymmtric\n");
    }
    else printf("matrix are symmtric\n");
    
    int sum =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<i;j++){
           a[i][j] = (a[i][j]+a[j][i])/2;
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}