#include <stdio.h>
int stair(int n){
    if(n<=2) return n;
   int x= stair(n-1)+stair(n-2);
   return x;
}
int main () {
    int n;
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);  











    return 0;
}