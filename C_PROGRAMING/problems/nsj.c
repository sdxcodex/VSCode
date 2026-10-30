#include <stdio.h>
#include <math.h>
int main (){
float p,sum,product = 1,n=2;
for(int i = 1;i<=n;i++){
    p = pow(i,i);
    product*=i;
    sum += p/product;
}printf("%f",sum);

return 0;}