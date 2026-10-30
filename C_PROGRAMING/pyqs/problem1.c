#include <stdio.h>
int main (){
    int x,y,n;
    printf("Enter the value of x :");
    scanf("%d",&x);
     printf("Enter the value of n :");
    scanf("%d",&n);
    switch(n){
        case 1 : y = 1+x;
        printf("%d",y);
        break;

        case 2 : y = 1 + (x / n);
        printf("%d",y);
        break;
        
        case 3 : y = 1 + (x*x*x);
        printf("%d",y);
        break;

        case 4 : printf("y = Exist");
        break;

        default :
        if(n<0){
            printf("input is invalid");
        }
        else{
        int z = 1;
    
        for(int i =  1 ; i<=n; i++){
            z = z*i;
        } 
        y = 1 + (x/z);
        printf("%d",y);
    }
    break;
 } return 0;
}