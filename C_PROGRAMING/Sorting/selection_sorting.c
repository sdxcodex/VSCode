#include <stdio.h>
#include <limits.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i =0;i<n-1;i++){
       int min = INT_MAX ;
       int minidx = 0;
       for(int j = i;j<n;j++){
        if(a[j]<min){
            min = a[j];
            minidx = j;
        }
       }
       int temp = a[i];
       a[i] = a[minidx];
       a[minidx] = temp;
    }

    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }





    return 0;
}