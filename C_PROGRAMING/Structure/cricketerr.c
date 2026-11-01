#include <stdio.h>
typedef struct cricketer {
    char name[50];
    int age;
    int matches;
    float average;
} cricketer;
int main () {
   cricketer a[20];
   for(int i  =0;i<1;i++){
    scanf("%[^\n]s",a[i].name);
    scanf("%d",&a[i].age);
    scanf("%d",&a[i].matches);
    scanf("%f",&a[i].average);  
}
   printf("Data : \n");
   for(int i  =0;i<1;i++){
    printf("%s\n",a[i].name);
    printf("%d\n",a[i].age);
    printf("%d\n",a[i].matches);
    printf("%f\n",a[i].average);  
}









    return 0;
}