#include <stdio.h>
int min(int a,int b){
    int f;
    if(a>b)f = b;
    else f =a;
    return f;
}
int gcd(int x , int y){
    int z;
    for(int i=1; i<=min(x,y);i++){
        if(x/i && y/i) z=i;
    }
    return z;
}
int main () {
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int x = gcd(a,b);
    printf("the gcd of %d and %d is %d ",a,b,x);









    return 0;
}