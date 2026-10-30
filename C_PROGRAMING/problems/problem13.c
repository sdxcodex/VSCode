#include <stdio.h>
int main () {
   int n = 5;
   int spa = n-1;
   int str = 1;
   for(int i = 1; i<=n;i++){
      for(int j = 1;j<=str;j++){
        printf("* ");
      }
      for(int k =spa;k>0;k--){
         printf("  ");
      }
      for(int j = 1;j<=str;j++){
        printf("* ");
      }
      if(i<=n/2){
        str++;
        spa-=2;
      }
      else {
        str--;
        spa+=2;
      }
       printf("\n");
       
   }








   return 0;
}