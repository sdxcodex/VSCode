#include <stdio.h>
int main (){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int a = n;
    do{
        int b = a;
        int sum = 0;
        while(b>0){
            sum = sum + b%10;
            b /=10;
        }
        a = sum;
    }
    while(a>=10);
    
    printf("value of a : %d",a);
    














    return 0;
}