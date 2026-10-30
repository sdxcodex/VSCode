#include <stdio.h>
int fact(int n){
    int z = 1;
    for(int i= 1;i<=n;i++){
    z = z*i;
    }
    return z;
}
int main () {
    int n ;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        int z = fact(i);
        printf("%d\n",z);
    }
    return 0;
}