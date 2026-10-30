#include <stdio.h>
int power(int n,int x){
    if(x==0){
        return 1 ;
    }

    return n*power(n,x-1);



}
int main () {
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d",p);






    return 0;
}