#include <stdio.h>
int main () {
    int n ;
    printf("Enter the value of n");
    scanf("%d",&n);
    int a = n;
    while(a!=1 && a!=4 ){
        int sum = 0;
        while(a>0){
            sum += (a%10)*(a%10);
            a = a/10;
        }
        a = sum;
    }
    if(a==1){
    printf("Value of n is : %d",a);}
    else printf("Value of n is : %d",a);








    return 0;
}
    
    