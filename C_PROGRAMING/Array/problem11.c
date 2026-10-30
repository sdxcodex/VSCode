#include <stdio.h>
int main () {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1; i<=n; i++){
        if(i%3==0 && i%5==0){
            sum = sum + 2*i;
        }
        else if(i%3 == 0){
            sum = sum + i;
        }
        else if(i%5 == 0){
            sum = sum - i;
        }
        
    }
        printf("%d\n",sum);
    int a = 0;
    while(sum>0){
        a = sum%10 + a;
        sum /= 10;
    }
    printf("Value of sum is : %d\n",a);
    int b = a;
    do{
        int x = b;
        int digit_sum = 0; 
        while(x>0){
            digit_sum = x%10 + digit_sum;
            x = x/ 10;

    }b=digit_sum;
}
    while(b>=10);
    printf("Value of b is : %d",b);


    return 0;
}