#include <stdio.h>
int main () {
   int n = 5;
   int spa = n-1;
   int str = 1;
   for(int i = 1; i<=n;i++){
    for(int k = spa;k>0;k--){
        printf(" ");
    }   
    for(int j=1;j<=2*n-1;j++){
        if(j==1 || j==2*i-1 || i==n){
        printf("*");}
        else printf(" ");
       }
    spa--;

    printf("\n");

    }



    return 0;
}