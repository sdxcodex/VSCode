#include <stdio.h>
int main () {
    int b,c;
    scanf("%d %d",&b,&c);
    int a = c-b;
    printf("age is : %d\n",a);
    float range =0;
    float x = 220-a;
    int z = x;
    printf("maximum heart rate : %d\n",z);
    printf("range %f - %f",(x*50/100),(x*85/100));
    return 0;
}