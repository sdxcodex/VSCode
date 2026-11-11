#include <stdio.h>
int prime(int s){
    if(s<=1)return 0;
    for(int i = 2;i<s;i++){
        if(s%i==0){
            return 0;
        }
    }
    return 1;
}
void print_a(int n){
    for(int i = 1;i<n;i++){
        int s = 2*(i*i)-1;
        int x = prime(s);
        if(x){
            printf("%d",i);
        }
    }
}
int main () {
    int n;
    scanf("%d",&n);
    print_a(n);




    return 0;
}