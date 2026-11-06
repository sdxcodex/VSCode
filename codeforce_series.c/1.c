#include <stdio.h>
void i(int x,int n){
    if(x>n)return ;

    printf("%d\n",x);
    i(x+1,n);    
    return ;
}
int main () {
    int n;
    scanf("%d",&n);
    i(1,n);
    return 0;
}