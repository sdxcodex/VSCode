#include <stdio.h>
#include <string.h>
int main () {
    struct x {
        int marks ;
        float persentage;
        char cgpa[50];
        
    }a;
    struct x s1;
    scanf("%d",&s1.marks);
    printf("%d",s1.marks);
    scanf("%f",&s1.persentage);
    printf("%f",s1.persentage);
    scanf("%s",s1.cgpa);
    printf("%s",s1.cgpa);
    strcpy(s1.cgpa,"atherv");
    printf("%d",s1.cgpa);
    strcpy(s1.cgpa,"atherv");
    // printf("%s",s1.cgpa);
    pri






    return 0;
}