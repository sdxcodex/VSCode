#include <stdio.h>
int main () {
    int m,n;
    printf("Enter the value of rows : ");
    scanf("%d",&m);
    printf("Enter the value of colums : ");
    scanf("%d",&n);
    int a[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p,q;
    printf("Enter the value of rows : ");
    scanf("%d",&p);
    printf("Enter the value of columns : ");
    scanf("%d",&q);
     int b[p][q];
    for(int i =0;i<p;i++){
        for(int j =0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    if(n!=p){
        printf("matrix multiplication not posiible");
    }
    else {
        int res[m][q];
        for(int i =0;i<m;i++){
            for(int j =0;j<q;j++){
                    res[i][j]=0;
                for(int k =0;k<n;k++){
                    
                    res[i][k] += a[i][k]*b[k][j];
                }
            }
        }
    for(int i =0;i<m;i++){
        for(int j =0;j<q;j++){
            printf("%d",res[i][j]);
        }
        printf("\n");
    }




    }















    return 0;
}



