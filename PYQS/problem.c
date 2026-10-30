#include <stdio.h>
int main () {
    int N=7;
    int a[7] = {20,80,30,100,25,90,10};
    int sum,j=0;
    for(int i = 0; i<7;i++){
       if(i==0){
        sum =a[i+1];
        if(sum<a[i]){
         a[j]=a[i];
         j++;
        }
       }
       else if(i==6){
        sum = a[i-1];
        if(sum<a[i]){
            a[j]=a[i];
            j++;
        }
       }
       else if(i!=6){
        sum = a[i+1]+a[i-1];
        if(sum<a[i]){
            a[j]=a[i];
            j++;
        }
    }

    }
    a[3]=20;
    a[4]=30;
    a[5]=25;
    int min =a[0];
    for(int k=0;k<j;k++){
        if(a[k+1]>a[k]){
            int temp =a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
        }
    }
    
    for(int j = 0;j<7;j++){
        printf("%d ",a[j]);
    }

    return 0;
}