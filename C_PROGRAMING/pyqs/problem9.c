#include <stdio.h>
int main () {
    int n=2;
    float sum =0,probuct=1;
    for(int i =1;i<=n;i++){
        sum +=i;
        probuct *=i;
    }
    float z = sum/probuct;
    printf("%f",z);























    return 0;
}