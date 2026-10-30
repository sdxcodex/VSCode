#include <stdio.h>
int main ()
{int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("It is three digit number");
    }
    else{printf("It is not three digit number");}


    return 0;
}