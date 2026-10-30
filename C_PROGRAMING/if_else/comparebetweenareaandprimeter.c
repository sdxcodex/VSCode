#include <stdio.h>
int main ()
{int length,breadth;
    printf("Enter the length :");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    int Area = length*breadth;
    int Perimeter = 2*(length + breadth);
    if(Area>Perimeter){
        printf("Area is greater than perimeter");
    }
    if(Area<Perimeter){
        printf("Area is less than perimeter");
    } 
    if(Area == Perimeter){
    printf("Area is equal to perimeter");
    }   
     return 0;}
