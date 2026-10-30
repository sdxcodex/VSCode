#include <stdio.h>
#include <limits.h>
int main ()
{
    int a[5] = {2,34,122,34,2};
    int min = INT_MAX ;
    for(int i=1;i<=4;i++){
        if(min>a[i]) {
        min = a[i];
    }
    }
    printf("%d",min); 
        return 0;
}