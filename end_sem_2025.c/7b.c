#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int meraki(int a[],int z){
    int p =0;
    if(a[0]<10){
        p=0;
    }
    else{
    for(int i=1;i<z-1;i++){
        if(abs(a[i]-a[i-1])!=1 || abs(a[i+1]-a[i])!=1 ){
          return 1;
        }
    }
}
    return 0;
}
int main () {
    int n;
    scanf("%d",&n);
    int t = n,z=0;
    while(t){
        t/=10;
        z++;
    }
    int a[z];
    for(int i =0;i<z;i++){
        int r = n%10;
        a[z-1-i]= r;
        n/=10;
    }
    int k =meraki(a,z);
    if(k){
        printf("No");
    }
    else printf("YES");


    return 0;
}