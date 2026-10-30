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
    int maxr=n-1;
    int maxc = m-1;
    int minr = 0;
    int minc = 0;
    int count =0;
    int te = m*n;
    while(count<=te){
        for(int i = minc;i<=maxc;i++){
            printf("%d ",a[minr][i]);
            count++;
        }
        minr++;
        if(count>=te){
            break;
        }
        for(int i = minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=te){
            break;
        }
        for(int i=maxc;i>=minc;i-- ){
            printf("%d ",a[maxr][i]);
            count++;
        }
        maxr--;
        if(count>=te){
            break;
        }
        for(int i =maxr;i>=minr;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
        if(count>=te){
            break;
        }
    }
    return 0;
}
