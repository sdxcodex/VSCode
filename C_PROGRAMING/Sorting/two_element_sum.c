#include <stdio.h>
#include <math.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    
    int sum1=0,x=n;
    for(int i =0;i<n;i++){
        int p = a[i];
        p*= pow(10,x-1);
        sum1 += p;
        x--;
    }

   
    int temp = a[n-1];
    a[n-1] = a[n-2];
    a[n-2] = temp;
    int l =1;
    while(a[n-l]==a[n-1-l]){
    l++;
    int temp = a[n-l];
    a[n-l] = a[n-l-1];
    a[n-l-1] = temp;
    }
    int sum2=0,y=n;
    for(int i =0;i<n;i++){
        int z = a[i];
        z*= pow(10,y-1);
        sum2 += z;
        y--;
    }
    
    printf("%d",sum1+sum2);





    return 0;
}