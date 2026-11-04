#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
     int repeted = 0;
    for(int i =0;i<n;i++){
       
       int  count = 1;
        for(int j = 0;j<i;j++){
            if(a[i]==a[j]){
                count=0;
                break;
            }
        }
        if(count==0){
            continue;
        }
        for(int j = i+1;j<n;j++){
            if(a[i]==a[j]){
                repeted++;
                break;
            }
        }
    }
    printf("%d",repeted);
}