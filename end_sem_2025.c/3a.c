#include <stdio.h>
int f(int p){
    int product =1;
    for(int i =1;i<=p;i++){
        product*=i;
    }
    return product;
}
int main (){
   int n;
   scanf("%d",&n);
   int sum =0;
   if(n==0){
    printf("NO");
   }
   else if(n>0){
      int x =1;
      while(n){
      sum += f(x);
      n--;
      x+=2;
      }
      printf("%d",sum);
   }
   else if(n<0){
       int x = -1;
       n=-n;
       for(int i=1;i<=n;i++){
        sum+=x;
        x-=3;
       }
       printf("%d",sum);
   }
   return 0;
}