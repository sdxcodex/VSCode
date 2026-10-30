#include <stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    int e =0;
        int a = x/5;
        if(x%5!=0){
        e = a+1;
        }
        else e = a;
        printf("%d",e);



    return 0;
}