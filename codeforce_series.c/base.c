#include <stdio.h>
void f(int n){
    if(n==0)return;
    f(n/2);
    int x = n%2;
    printf("%d",x);
    return ;
}
int main () {
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        f(n);
        printf("\n");
    }
    return 0;
}