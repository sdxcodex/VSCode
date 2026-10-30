#include <stdio.h>
int main () {
    struct pockemom
    {  int hp;
        int atteck;
        int speed;
        char ch;       
    };
    struct pockemom pickachu;
    
    scanf("%d",&pickachu.atteck) ;
    pickachu.hp = 40;
    pickachu.speed = 100;
    pickachu.ch = 'A';
    printf("%d",pickachu.atteck);
  
    struct pockemom mew;
    mew.atteck =90;
    printf("%d",mew.atteck);



    return 0;
}