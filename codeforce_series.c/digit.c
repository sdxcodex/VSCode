#include <stdio.h>
void f(long long n){
    if(n<10){
        printf("%lld ",n);
        return;
    }
    f(n/10);
    f(n%10);
    
}



int main () {
    int T;
    scanf("%d",&T);
    while(T--){
        long long n;
        scanf("%lld",&n);
        if(n<10){
            printf("%lld",n);
        }
        else f(n);
        printf("\n");
    }
    return 0;
}




