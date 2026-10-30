#include <stdio.h>
int fact(int n){
    int x=1;
    for(int i = 1;i<=n;i++){
        x=x*i;
    }
    return x;
}
int main () {
    int n;
    scanf("%d",&n);
    int spa = n-1;
    for(int i = 0;i<=n-1;i++){
        for(int j = 1; j<=spa; j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            int comb = fact(i)/(fact(i-k)*fact(k));
            printf("%d ",comb);
            
        }
        printf("\n");
        spa--;
    }

    return 0;
}