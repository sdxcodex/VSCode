#include <stdio.h>
int main ()
{
    int m[9] ={12,13,24,12,32,2,1,2,3} ;
    
    for(int i = 0 ; i<=8 ; i++){
      if(i%2 ==0) {
        m[i]+=10;
        printf("%d ",m[i]);
      }
    else {
        m[i]*=2;
        printf("%d ",m[i]);
    }
}
return 0;
}