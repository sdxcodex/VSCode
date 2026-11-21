#include <stdio.h>
int p(int n){
    while(1){
    int x = n;
    int q=0;
    if(x<=1)q=1;
    for(int i =2;i<x;i++){
        if(x%i==0){
            q=1;
        }
    }
    if(q==0 && (x-1)%4==0){
        return x;
    }
    else n++;
    }
    
}
int main () {
   int n;
   scanf("%d",&n);
   int z =p(n);
   printf("value is : %d",z);



    return 0;
}