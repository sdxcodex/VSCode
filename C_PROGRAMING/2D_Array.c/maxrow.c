#include <stdio.h>
int main () {
    int n;
    printf("Number of rows : ");
    scanf("%d",&n);
    int a[n][n];
    for(int i =0;i<n;i++){

        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int maxrow,p;
     for(int i =0;i<n;i++){
        int sum;
        for(int j =0;j<n;j++){
            sum += a[i][j];
        
        }
        if(sum>maxrow){
            maxrow =sum;
            p=i;
        }
    }
    printf("%d",p+1);






    return 0;
}
