#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t=0;
    for(int i =0;i<n;i++){
        int visited=0;
        for(int j =0;j<i;j++){
            if(a[i]==a[j]){
             visited = 1;
            }
        }
        if(visited)continue;

        int count =1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        printf("%d %d\n",a[i],count);
        if(count > 1){
          t += count-1;
        }
    }
    printf("%d",t);


    return 0;
}