#include <stdio.h>
int main ()
{
    int m[8] = {5,1,32,12,2,88,3,18};
    int x = 3;
    int pairs = 0;
    for(int i = 0;i<=7;i++){
    
        for(int j = i + 1;j<=7;j++){
            if(m[i] + m[j] == x){
                pairs++;
            }
        }
    }
    printf("%d",pairs);
      return  0;
}