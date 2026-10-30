#include <stdio.h>
int main (){
    int n=5;
    int str = n;
    int spa = 0;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=spa;j++){
            printf(" ");
        }
        for(int k = 1;k<=str;k++){
            printf("*");
        }
        // for(int j = 1; j<=str; j++){
        //     printf(" ");
        // }

        if(i<=n/2){
            str-=2;
            spa++;
        }
        else{
            str+=2;
            spa--;
        }
        printf("\n");
    }
    















    return 0;
}