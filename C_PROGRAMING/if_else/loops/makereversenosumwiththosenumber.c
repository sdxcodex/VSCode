#include <stdio.h>
int main ()
{int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int original = n ;
    int r = 0;
    while(n>0){
    r = r*10;
    r = r + (n%10);
    n = n/10;

    }
    int sum = r + original; 
    printf("the sum of given number and reverse number is : %d" , sum );







    return 0;
} 