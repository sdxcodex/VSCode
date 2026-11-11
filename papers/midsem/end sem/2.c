#include <stdio.h>
int main () {
    int n,x;
    scanf("%d %d",&n,&x);
    int  p = n/2;
    int q = 1;
    for(int i = 1;i<=n;i++){
        for(int j =p;j>0;j--){
            printf("1 ");
        }
        for(int j = 1;j<=q;j++){
            printf("%d ",x);
        }
        for(int j = p;j>0;j--){
            printf("1 ");
        }
        if(i<=n/2){
            p--;
            q+=2;
        }
        else {
            p++;
            q-=2;
        }
        printf("\n");
    }
        return 0;
}