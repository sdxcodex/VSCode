#include <stdio.h>
int main ()
{
    int m[4] ;
   
    for(int i =0 ; i <=3; i++){
        scanf("%d",&m[i]);
    }
    for(int i = 0;i<=4;i++){
      if(m[i]<35)  printf("%d ",m[i]);
    }
return 0;
}