#include <stdio.h>
int main () {
   int n,k;
   scanf("%d %d",&n,&k);
   int a[n];
   for(int i = 0; i<n;i++){
    scanf("%d",&a[i]);
   }
   int count =0;
   int min = a[k-1];
   for(int i = 0; i<n;i++){
    if(a[i]>=min && a[i]>0){
        count++;
    }
   }
   printf("%d",count);
   





    return 0;
}