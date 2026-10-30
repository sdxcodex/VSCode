#include <stdio.h>
int main () {
    int m,n;
    printf("Enter the value of rows : ");
    scanf("%d",&m);
    printf("Enter the value of colums : ");
    scanf("%d",&n);
    int a[m][n];
    
    
    for(int i =0;i<m;i++){
        if(i%2==0){for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    else {
        for(int j =n-1;j>=0;j--){
            scanf("%d",&a[i][j]);
        }
    } 
}
    for(int i =0;i<m;i++){
         for(int j =0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}