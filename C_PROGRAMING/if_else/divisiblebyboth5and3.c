#include <stdio.h>
int main ()
{int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n%3 == 0 && n%5 == 0){
        printf("number is divisible by both ");
    }
    else{printf("number is not divisible by both");}






    return 0;
}