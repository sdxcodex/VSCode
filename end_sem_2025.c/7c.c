#include <stdio.h>
int main () {
    int n=5;
    int spa =1;
    int str=n-1;
    for(int i =1;i<=n*2-1;i++){
        printf("*");
    }
    printf("\n");
    for(int i =1;i<=2*n-2;i++){
        for(int j =1;j<=str;j++){
            printf("*");
        }
        for(int j=1;j<=spa;j++){
            printf(" ");
        }
        for(int j = 1;j<=str;j++){
            printf("*");
        }
        printf("\n");
        if(i<(2*n-2)/2){
            spa+=2;
            str--;
        }
        if(i>4){
            spa-=2;
            str++;
        }
    }
    for(int i =0;i<2*n-1;i++){
        printf("*");
    }
}