// #include <stdio.h>
// int main () {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int count =0,gap=0;
//     printf("The prime number and if have more than two prime number then gap also here \n");
//     for(int i =a;i<=b;i++){
//         int x =0;
//         if(i<=1){
//             x=1;
//         }
//         for(int j =2;j<i;j++){
//             if(i%j==0){
//                 x=1;
//             }
//         }
//         if(x==0 ){
//             count++;
//             printf("%d",i);
//             if(count==1){
//                 gap = i;
//             }
//             else {
//                 printf(" gap = %d",i-gap);
//                 gap = i;
//             }           
//             printf("\n");  
//         }      
//         }
//         printf("%d",count);
//     }

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer greater than 1: ");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Invalid input.\n");
        return 0;
    }

    int temp = n;
    int distinct = 0;

    printf("Prime factors: ");

    for(int i = 2; i * i <= temp; i++)
    {   printf("3");
        if(temp % i == 0)
        {
            distinct++;

            while(temp % i == 0)
            {
                printf("%d ", i);
                temp /= i;
            }
        }
    }

    if(temp > 1)
    {
        printf("%d ", temp);
        distinct++;
    }

    printf("\nNumber of distinct prime factors = %d\n", distinct);

    return 0;
}