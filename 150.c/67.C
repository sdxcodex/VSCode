// #include <stdio.h>
// int main () {
//     int n;
//     scanf("%d",&n);
//     int x,total=0,count=0;
//     scanf("%d",&x);
//     int a =0;
//     int b = 1;
//     int sum =0;
//     for(int i = 1;i<=n;i++){
//         printf("%d ",sum);
//         sum = a+b;
//         b = a;
//         a = sum;
    
   
// }    int c =0;
//     int d= 1;
//     int sum1 =0;

//     for(int i = 1;i<=n;i++){
    
//     while(1){
//         if(total<=x){
//         count++;
//         total+=sum1;
//         break;
//         }
//         if(total>x && i== count){
//             printf("%d ",sum1+(c+d));
//             total-=sum1;
//             count--;
//             break;
//         }
//         break;
//     }
//     sum1 = c+d;
//         d = c;
//         c = sum1;
// }
// printf("%d %d",count, total);;
// }


#include <stdio.h>

int main() {
    int n, x;

    scanf("%d", &n);
    scanf("%d", &x);

    if(n <= 0) {
        printf("Invalid N");
        return 0;
    }

    int a = 0, b = 1;
    long long total = 0;
    int found = 0, firstGreater;

    for(int i = 1; i <= n; i++) {
        int term;

        if(i == 1)
            term = 0;
        else if(i == 2)
            term = 1;
        else {
            term = a + b;
            a = b;
            b = term;
        }

        printf("%d ", term);

        if(term <= x)
            total += term;

        if(!found && term > x) {
            firstGreater = term;
            found = 1;
        }
    }

    printf("\nSum = %lld\n", total);

    if(found)
        printf("First term greater than %d = %d\n", x, firstGreater);
    else
        printf("No generated term exceeds %d\n", x);

    return 0;
}