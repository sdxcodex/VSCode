#include <stdio.h>
int main ()
{
    int m[4] = {23,1,32,12};
   int sume = 0;
   int sumo = 0;
    for(int i = 0;i<=3;i++){
      if(i%2==0){
      sume = sume + m[i];
    }
      else sumo = sumo + m[i];  
    }
    int d = sume - sumo;
    printf("%d ",d);
return 0;
}