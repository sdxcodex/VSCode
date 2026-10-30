#include <stdio.h>
int main () {
    int n,h;
    scanf("%d %d",&n,&h);
    int a[n];
    int t =0;
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>h){
            t++;
        }
    }
    printf("%d",t+n);








    return 0;
}