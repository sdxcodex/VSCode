#include <stdio.h>
int main (){
    int n = 5;
    int spa = n-1;
    int str = 1;
    for(int i = 1; i<=n ; i++ ){
        for(int j = spa; j>0; j--){
            printf(" ");
        }
        for(int k = 1; k<=str; k++){
            if(k==1 || k==str || i==n){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        str+=2;
        spa--;
        printf("\n");
    } 
    return 0;
}