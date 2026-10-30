#include <stdio.h>
void facc(int n){
    int a = 0;
    int sum=0,b =1;
    for(int i =1;i<=n;i++){
        printf("%d ",sum);
        sum = a+b;
        b=a;
        a=sum;

    }
    return ;
}
int main (){
    int n =10;
    facc(n);




    return 0;
}