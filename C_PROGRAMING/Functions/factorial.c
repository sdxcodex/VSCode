#include <stdio.h>
      int fact(int n) {
        // scanf("%d",&n); 
        int x = 1;
        for(int i = 1; i<=n;i++){
            x=x*i;
        }
    return x;
}
      int main () {
      int n ;
      printf("Enter the value of n : ");
      scanf("%d",&n);
      int r ;
      printf("Enter the value of r : ");
      scanf("%d",&r);
      int comb = fact(n)/(fact(r)*fact(n-r));
      printf("%d",comb);



      return 0;
      }