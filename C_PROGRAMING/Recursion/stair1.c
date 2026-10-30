#include <stdio.h>
int stair(int n){
    if(n<=2){
        return n;
    }
    else if(n==3){
        return n+1;
    }
    int x= stair(n-1) + stair(n-2) + stair(n-3);
    return x;
}
int main () {
    int n;
    scanf("%d",&n);
    int p = stair(n);
    printf("%d",p);

    return 0;
}