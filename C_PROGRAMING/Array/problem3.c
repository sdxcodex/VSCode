#include <stdio.h>
int main ()
{
    int m[8] = {1,2,3,4,5,7,8};
    int x = 12;
    int pairs = 0;
    for(int i = 0;i<=7;i++){
    
        for(int j = i + 1;j<=7;j++){
            
            for(int k = j + 1; k<=7; k++){
                if(m[i]+m[j]+m[k]==x){
                  printf("(%d,%d,%d)",m[i],m[j],m[k]);
                    printf("\n");  
                    pairs++;
                }
            }
        }
    }
    printf("%d",pairs);
      return  0;
}