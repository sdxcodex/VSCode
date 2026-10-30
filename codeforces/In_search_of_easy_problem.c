#include <stdio.h>
int main () {
   int n;
   scanf("%d",&n);
   int a[n];
   int x =0;
   for(int i =0;i<n;i++){
    scanf("%d",&a[i]);
    
   }
   for(int i =0;i<n;i++){
    if(a[i]==1){
        x =1;
        break;
    }
   }
   if(x==1){
    printf("HARD");
   }
   else printf("EASY");
   











    return 0;
}