#include <stdio.h>
int main (){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n ;i++ ){
        scanf("%d",&a[i]);
    }
    int z ;
    printf("choose buy day : ");
    scanf("%d",&z);
    int buy = a[z-1];
    int b;
    int c[20],d=0, k=1;
    for(int i = z; i<n ; i++){
        b = a[i]-buy;
        if(b>0){
             c[d]=b;
             d++;
             k=1;
        }
        else {
           k = 0;
        }
    }
    if(b>0){
    int max = c[0];
    for(int m = 1 ; m<d;m++){
        if(max<c[m]){
            max = c[m];
        }
    }
    printf("max profit : %d",max);
}






    return 0;
}