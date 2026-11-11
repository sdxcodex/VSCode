#include <stdio.h>
int main () {
    int a[8];
    for(int i =0;i<8;i++){
        scanf("%d",&a[i]);
    }
    int x =0;
    for(int i =0;i<8-1;i++){
        if((a[i]+a[i+1])%2!=0){
            x=1;
            break;
        }
    }
    if(x){
        printf("Not valid");
    }
    else printf("valid");
    return 0;
}