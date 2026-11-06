#include <stdio.h>
int main () {
    int a,b;
    scanf("%d %d",&a,&b);
    int count =0,gap=0;
    printf("The prime number and if have more than two prime number then gap also here \n");
    for(int i =a;i<=b;i++){
        int x =0;
        if(i<=1){
            x=1;
        }
        for(int j =2;j<i;j++){
            if(i%j==0){
                x=1;
            }
        }
        if(x==0 || i==2){
            count++;
            printf("%d",i);
            if(count==1){
                gap = i;
            }
            else {
                printf(" gap = %d",i-gap);
                gap = i;
            }           
            printf("\n");  
        }      
        }
        printf("%d",count);
    }
