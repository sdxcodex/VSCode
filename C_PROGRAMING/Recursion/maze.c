#include <stdio.h>
int maze(int cr,int cc,int lr,int lc){
    int rightways =0;
    int downways =0;
    if(cc==lc && cr==lr){
        return 1;
    }
    if(cr==lr){
        rightways += maze(cr,cc+1,lr,lc);
    }
     if(cc==lc){
        downways += maze(cr+1,cc,lr,lc);
    }
    if(cc<lc && cr<lr){
        rightways += maze(cr,cc+1,lr,lc);
        downways += maze(cr+1,cc,lr,lc);
    }
    int total = rightways + downways;
    return total;
}


int main () {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int z=maze(1,1,n,m);
    printf("%d",z);




    return 0;
}