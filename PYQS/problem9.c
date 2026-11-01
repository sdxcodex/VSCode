#include <stdio.h>
int main () {
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    int a[r][c];
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i<r;i++){
        if(i%2==0){
            for(int j =0;j<c;j++){
                for(int k = j+1;k<c;k++){
                if(a[i][j]>a[i][k]){
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;                    
                }
            }
            }
        }

        if(i%2!=0){
            for(int j =0;j<c;j++){
                for(int k = j+1;k<c;k++){
                if(a[i][j]<a[i][k]){
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;                    
                }
            }
            }
        }
    }
     for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}