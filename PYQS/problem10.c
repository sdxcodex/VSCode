#include <stdio.h>
int p(int n){
    int a =0;
    for(int i =2;i<n;i++){
        if(n%i==0){
        a=1;
        break;
        }
    }
    if(n<=1){
        return 1;
    }
    else if(a==0 || n==2 ){
        return 0;
    }
    else return 1;
}
int main () {
    int n;
    printf("NUmmber of elements : ");
    scanf("%d",&n);
    int a[n];
    int sum1=0,sum2=0;
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
        if(p(i)==0){
            sum1+=a[i];
        }
        else sum2+=a[i];

    }
    printf("%d",sum2-sum1);





    return 0;
}