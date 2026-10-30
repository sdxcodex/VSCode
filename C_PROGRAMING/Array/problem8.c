#include <stdio.h>
int main ()
{ int a[6] = {2,3,3,1,5,6};
  
  for(int i = 0,j=3;i<=j;i++,j--){
    int temp = a[i];
    a[i] = a[j] ;
    a[j] = temp;
  }

  for(int i =0;i<=5;i++){
      printf("%d ",a[i]);
  }












    return 0;
}