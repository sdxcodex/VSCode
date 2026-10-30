#include <stdio.h>
int main () {
   int n = 5;
   int spa = n/2;
   int str = 1;
   for(int i = 1; i<=n;i++){
    //    for(int j=spa; j>0;j--){
    //     printf(" ");
    //    }
       for(int k=1;k<=str;k++){
        printf("*");
       }
     if(i<=n/2) { spa--;
     str+=1;}
       else{
        spa++;
        str-=1;
       }
       printf("\n");
       
   }













    return 0;
}