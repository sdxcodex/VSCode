#include <stdio.h>
int main () {
    int n=7;
    int spa = n/2;
    int str = 1;
    for(int i = 1;i<=n; i++ ){

        for(int j = spa ; j>0;j--){
            printf(" ");
        }
        
        for(int k =1;k<=str;k++){
            if(k==1 || k==str){
                printf("*");
            }
            else {
                printf(" ");
            }
        }

        if(i<=n/2){
            str+=2;
            spa--;
        }
        else {
            str-=2;
            spa++;
        }
        printf("\n");
    }



















    return 0;
}