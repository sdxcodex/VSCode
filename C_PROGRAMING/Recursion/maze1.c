#include <stdio.h>
int maze(int a,int b) {
   
    int rightways =0;
    int downways =0;
     if(a==1 && b==1) return 1;
    if(a==1){
        rightways +=maze(a,b-1);
    }
    if(b==1){
        downways+=maze(a-1,b);

    }
    else if(a>1 && b>1){
        rightways+= maze(a,b-1);
        downways += maze(a-1,b);
    }
   int total = rightways + downways ;
    return total;
}    

   int main () {
   int a;
   scanf("%d",&a);
   int b;
   scanf("%d",&b);
   int c = maze(a,b);
   printf("%d",c);
   








    return 0;
   }