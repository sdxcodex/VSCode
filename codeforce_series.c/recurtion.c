#include <stdio.h>
void x(int n){
    if(n==0){
        return ;
    }
    printf("I love Recursion\n");
    return x(n-1);
}
int main () {
    int n;
    scanf("%d",&n);
    x(n);
    return 0;
}