#include <stdio.h>
int main (){
    long long n=7;
    int a[20];
    int x=0;
    if( n == 1){
        printf("There are no prime factor of 1 ");
    }
    else{
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            a[x]=i;
            x++;
        }
    }
    int z=0;
    int b[20];
    for(int j=0;j<x;j++){
        int prime = 1;
        if(a[j]<2){
            prime = 0;
        }
        for(int k =2;k<a[j];k++){
            if(a[j]%k==0){
                prime = 0;
                break;
            }
        } 
        if(prime==1){
            b[z]=a[j];
            z++;
        }
    }
    int max = b[0];
    for(int k =1;k<z;k++){
        if(b[0]<b[k]){
            max = b[k];
        }
    }
    printf("%d",max);
}
    return 0;
}