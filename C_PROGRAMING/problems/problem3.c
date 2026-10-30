#include <stdio.h>
int main () {
    int a=0,b=1,sum =0 ;
    for(int i = 1; i<=5;i++){
        printf("%d",sum);
        sum = a+b;
        b=a;
        a=sum;
    }
    
    
    











    return 0;
}