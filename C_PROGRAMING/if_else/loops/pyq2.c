#include <stdio.h>
int main ()
{int N;


printf("Enter the number: ");

scanf("%d", &N);

int sum = 0;

for(int i = 1; i<=N;i++)

{ 
if(i%3 == 0 && i%5 == 0){ sum = sum + 2*i;}
if(i%3==0){ sum = sum + i; } 
if(i%5==0){SUM = Sum - i;
 }
} 
int digit_sum=0;

while(sum>0)

{

digit_sum = digit_sum + sum%10;

sum = sum/10;

}

printf("value of digit_sum: ",digit_sum);

int a = 0;

do(

a= digit_sum%10 + a ;

digit_sum digit_sum/10;

while(a<10);

printf("enter the vlaue of a: %d",a);

return 0;









}
