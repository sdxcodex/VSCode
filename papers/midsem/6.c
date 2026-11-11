#include <stdio.h>
#include <math.h>
int main () {
    int n;
    float sum=0;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        float product =1;
        int p =i;
        while(p){
            product*=p;
            p--;
        }
        float z =pow(i,i);
        sum += (z/product);
    }
    printf("%f",sum);






    return 0;
}