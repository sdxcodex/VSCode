#include <stdio.h>
int main()
{int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        printf("Number is divisible by 5 or 3");
    }
    else {
        printf("Number is not divisible by 5 or 3");
    }





    return 0;
}
