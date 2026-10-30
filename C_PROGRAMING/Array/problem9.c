#include <stdio.h>
int main() {
int n, i;
printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n];

printf("Enter array elements: ");
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int x ,k;
scanf("%d", &x);
for(int i = 0; i<n;i++){
    if(arr[i]==x){
        printf("YES");
        k=0;
    break;}
    k=1;
}
    if(k==1){
        printf("NO");
    }







   return 0;
}