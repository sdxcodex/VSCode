#include <stdio.h>
void f(int n){
    if(n==1){
        printf("1");
        return ;
    }
    printf("%d ",n);
    return f(--n);
}
int main () {
    int n ;
    scanf("%d",&n);
    f(n);
    return 0;
}