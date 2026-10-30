#include <stdio.h>
void inc(int n,int x){
     if(n==0) return;
         
     inc(n-1,x+1);
     printf("%d\n",x);
     return;
}
    int main () {
        int n;
        scanf("%d",&n);
        inc(n, 1);













        return 0;
    }