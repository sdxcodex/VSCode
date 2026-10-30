#include <stdio.h>
void a(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    a(n-1,s+n);
    return;
    
}
int main () {
    int n ;
    scanf("%d",&n);
    a(n,0);
    return 0;
}