#include <stdio.h>
int prime(int m){
    int count =0;
    while(1){
        int x;
        scanf("%d",&x);
        if(x==-1)break;
        if(x%2==0){
            count++;
            if(count==m){
                return x;
            }
        }
    }
    return -1;
}
int main () {
    int m;
    scanf("%d",&m);
    printf("%d",prime(m));
    return 0;
}