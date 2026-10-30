#include <stdio.h>
#include <limits.h>
int main ()
{
    int a[5] = {1110,1111,122,34,45};
    int max = INT_MIN ;
    int smax = INT_MIN ;
    
    for(int i=0;i<=4;i++){
        if(max<a[i]) {
        max = a[i];
    }
    }
    for(int i = 0; i<=4;i++){
       
        if(a[i]!=max && smax<a[i]){

            smax = a[i];
        }
    }
    printf("%d",smax);
        return 0;
}