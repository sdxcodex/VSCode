#include <stdio.h>
int main () {
   int n = 5;
   int spa = n-1;
   int a=1,b=1;
   for(int i = 1; i<=n;i++){
       for(int k=spa;k>0;k--){
        printf(" ");
       }spa--;
    for(int j =1;j<=i;j++){ 
        int c = 64+j; 
        char ch = (char)c;
        printf("%c",c);
    }
    int z =i-1;
    for(int l=1;l<=i-1;l++){
        int y = 64+z;
        char ch = (char)y;
        printf("%c",ch);
        z--;
    }
       printf("\n");
       
   }













    return 0;
}