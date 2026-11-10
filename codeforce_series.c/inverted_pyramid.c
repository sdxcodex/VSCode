// #include <stdio.h>
//   int a = 1;
// void f1(int space,int star){
//     if(space>0){
//         printf(" ");
//         f1(--space,star);
//     }
//     else if(star>0){
//         printf("*");
//         f1(space,--star);
//     }
//     return;
// }



// void f(int row,int n){
//     if(row>n){
//         return ;
//     }
//     f1(row-1,2*n-a);
//     printf("\n");
//     a=a+2;
//     f(row+1,n);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     f(1,n);
//     return 0;
// }








#include <stdio.h>
int a =1;
void f1(int space , int star){
    if(space>0){
        printf(" ");
        f1(--space,star);
    }
    else if(star>0){
        printf("*");
        f1(space,--star);
    }
//     return;
}
void f(int row,int n){
    if(row>n){
        return;
    }
    f1(row-1,2*n-a);
    a+=2;
    printf("\n");
    f(row+1,n);

}
int main () {
    int n;
    scanf("%d",&n);
    f(1,n);




    return 0;
}