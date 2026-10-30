#include <stdio.h>
int main () {
    int n ;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
    int sum = 0,a=i;
    while(a>0){
        int d = a%10;
        sum += d*d*d;
        a/=10;        
    }
    if(i==sum){
        printf("Number is armstrong %d \n",i);
    }
}
    
    









    return 0;
}