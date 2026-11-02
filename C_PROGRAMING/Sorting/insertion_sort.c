#include <stdio.h>
int main  () {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        int j =i;
        while(j>=1 && a[j]<a[j-1]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);
    }




    return 0;
}