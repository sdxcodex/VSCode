#include <stdio.h>
int main (){
    int a[3] = {3,2,6};
    int b[3];
    for(int i =0;i<3;i++){
        b[i]=a[3-i-1];

    }
    for(int i = 0;i<3;i++){
     printf("%d",b[i]);
    }












    return 0;
}