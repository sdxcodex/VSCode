#include <stdio.h>
int main () {
   int n;
   scanf("%d",&n);
   int x=0,count=0;
   while(n){
    if(n%10==4 || n%10==){
       x=1;
       count++;
    }
    else{
        x=0;
        break;
    }
    n/=10;
   }
   if(x==1){
    if(count==4 || count==7)
    printf("YES");
    else printf("NO");
   }
   else printf("NO");
    return 0;
}



// #include <stdio.h>

// int main() {
//     long long n;
//     scanf("%lld", &n);

//     int count = 0;

//     while (n > 0) {
//         int digit = n % 10;

//         if (digit == 4 || digit == 7) {
//             count++;
//         }

//         n /= 10;
//     }

//     int lucky = 1;

//     if (count == 0) {
//         lucky = 0;
//     } else {
//         while (count > 0) {
//             int digit = count % 10;

//             if (digit != 4 && digit != 7) {
//                 lucky = 0;
//                 break;
//             }

//             count /= 10;
//         }
//     }

//     if (lucky) {
//         printf("YES");
//     } else {
//         printf("NO");
//     }

//     return 0;
// }