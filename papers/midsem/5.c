#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;
    scanf("%d",&n);
    int s1=0,s2=0;
    int x=0,p=n;
    int count =0;
    while(n){
        count++;
        n/=10;
    }
    for(int i =1;i<=count;i++){
        x=0;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                x=1;
            }
        }
        if(x!=1 && i!=1){
            int count1 =count;
            int z =p;
            while(count1!=i){
                z/=10;
                count1--;
            }
            z%=10;
            s1+=z;
        }
        else {int count1=count;
            int z =p;
            while(count1!=i){
                z/=10;
                count1--;
            }
            z%=10;
            s2+=z;
        }
    }
    printf("%d",s1-s2);
    int sum =0,a=0,b=1,d=1;
    for(int i =0;i<=p;i++){
        if(sum==abs(s1-s2)){
            printf("The differnce is a fibonacci number ");
            d=0;
            break;
        }
        else if(s1-s2<sum){
            break;
        }
    sum = a+b;
    b=a;
    a=sum;
    }
    if(d){
       printf("NO");
    }

    return 0;
}




#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int isFibonacci(int n)
{
    int a = 0, b = 1;

    while(a < n)
    {
        int c = a + b;
        a = b;
        b = c;
    }

    return a == n;
}

int main()
{
    int n;
    scanf("%d", &n);

    int temp = n;
    int count = 0;

    while(temp)
    {
        count++;
        temp /= 10;
    }

    int primeSum = 0, nonPrimeSum = 0;

    for(int pos = 1; pos <= count; pos++)
    {
        int x = n;

        for(int j = count; j > pos; j--)
            x /= 10;

        int digit = x % 10;

        if(isPrime(pos))
            primeSum += digit;
        else
            nonPrimeSum += digit;
    }

    int diff = abs(primeSum - nonPrimeSum);

    printf("Prime Position Sum = %d\n", primeSum);
    printf("Non Prime Position Sum = %d\n", nonPrimeSum);
    printf("Difference = %d\n", diff);

    if(isFibonacci(diff))
        printf("The difference is a Fibonacci number");
    else
        printf("The difference is not a Fibonacci number");

    return 0;
}