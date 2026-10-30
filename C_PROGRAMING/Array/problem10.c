#include <stdio.h>
int main ()
{ int a[5] ={1,2,3,2,1};
   
  for(int i = 0; i<=4 ;i++){
      
    for(int j = i+1; j<=4;j++){
        if(a[i]==a[j]){
        break;
        }
      printf("the unique element is : %d  ",a[i]);
      break;  
    }

        
  }
  





    return 0;
}