#include <stdio.h>
int fibo(int n){
    if(n<=2){
        return 1;
    }


    return fibo(n-1) + fibo(n-2);
}
int main () {
    int n1;
    scanf("%d",&n1);
    int f = fibo(n1);
    printf("%d",f);
    







    return 0;
}