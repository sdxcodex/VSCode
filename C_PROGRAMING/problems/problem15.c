#include <stdio.h>
int main (){
    int n = 8;
    int spa = n-1;
    for(int i =1 ; i<=n; i++){
        for(int j = spa; j>0;j--){
            printf(" ");
        }
        int value = 1;
        for(int k = 0;k<i;k++){
            printf("%3d",value);
            value = value*(i-k-1)/(k+1);
        }
        spa--;
        printf("\n");
    }
    return 0;
}