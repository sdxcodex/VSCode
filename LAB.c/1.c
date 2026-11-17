#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    float b[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    
    printf("spike elements\n");
    for(int i =1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            printf("%d ",a[i]);
            b[i]= (a[i-1]+a[i+1])/2;
        }
    }
    printf("\n");
    for(int i =0;i<n;i++){
       printf("%.2f ",b[i]);
    }






    return 0;
}