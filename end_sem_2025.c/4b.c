#include  <stdio.h>
void d(int s){
    int p = s;
    int t=1,z=0;
    while(p){
        int f = p%10;
        p/=10;
        z+=(t*f);
        t*2;
    }
    printf("\n%d",z);
}


void b(int sum){
    int p =sum;
    int s=0,q=1;
    while(p){
        int r = p%2;
        p/=2;
        s+= r*q;
        q*=10;
    }
    printf("\n%d",s);
    d(s);
}




int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    int sum =0;
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
        sum +=a[i];
    }
    b(sum);
    





    return 0;
}