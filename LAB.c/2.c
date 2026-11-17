#include <stdio.h>
int main () {
    int x,age,t;
    printf("Select Travel Class: 1. Economy Class - Rs. 5000 \n 2. Business Class - Rs. 12000 \n 3. First Class - Rs. 20000 ");
    printf("Enter your choice (1-3): \n Enter passenger age: \nIs travel on weekend? (1-Yes, 0-No):  ");
    scanf("%d %d %d",&x,&age,&t);
    float total=0;
    switch (x)
    {
    case 1 : total = 5000;
             break;
    case 2: total = 12000;
            break;
    case 3: total = 20000;
           break;    
    default:
        break;
    }
    float rate =0;
    if(t){
        rate+= 0.15;
    }
    if(age>=60){
        rate+=0.2;
    }
    else if(age<12){
        rate+=0.3;
    }
    total *=(1-rate);
    printf("%.2f",total);
    return 0;
}