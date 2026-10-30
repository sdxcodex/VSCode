#include <stdio.h>
int main (){
    float x,y,z,avg;
    printf("Enter the marks of students : ");
    scanf("%f %f %f",&x,&y,&z);
    avg = (x+y+z)/3;
    if(avg>=75){
        if(x>=60 && y>=60 && z>=60){
            printf("Full Scholership");
        }
        else {
            printf("Half Scholership");
        }
    }
    else if(avg>=60 && avg<=74){
        if(x<40 ||y<40 || z<40){
            printf("Not eligible");
        }
        else {
            printf("Quarter Eligible ");
        }
    }
    else if(avg <60){
        printf("Student is not eligible");
    }


    return 0;
}