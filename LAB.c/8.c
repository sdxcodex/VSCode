#include <stdio.h>
int main () {
   int n ;
   scanf("%d",&n);
   int a[100];
   for(int i =0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("Choose position");
   int p,value;
   scanf("%d %d",&p,&value);
   for(int i = n;i>p-1;i--){
    a[i]=a[i-1];
   }
  
   n++;
   a[p-1]=value;
    for(int i =0;i<n;i++){
    printf("%d",a[i]);
   }
   for(int i =p-1;i<n-1;i++){
      a[i]=a[i+1];
   }
   n--;
   for(int i =0;i<n;i++){
    printf("%d",a[i]);
   }
   



    return 0;
}