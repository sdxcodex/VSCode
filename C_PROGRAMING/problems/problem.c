#include <stdio.h>
int main (){
    int a,b,c;
    printf("enter the both value of a and b");
    scanf("%d %d",&a,&b );
    while(b!=0){
        c = b;
        b = a%b;
        a = c;
    }
    if(c<0)
    c = c*-1;
    printf("the GCD of above element : %d",c);












    return 0 ;
}