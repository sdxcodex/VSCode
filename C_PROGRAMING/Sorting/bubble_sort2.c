#include <stdio.h> 
#include <stdlib.h>
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
    int  b= n;
    for(int i =0;i<n-1;i++){
    bool flag = true;
        for(int j =0;j<=b-2;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] =  temp;
                flag = false;
            }
        }
        if(flag){
            break;
        }
        b--;
    }
    printf("\n");
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}