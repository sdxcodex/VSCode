#include <stdio.h>
#include <string.h>
typedef struct pockemom
    {  int hp;
        int atteck;
        int speed;
        char tier;
        char name[50];       
    }pockemom;
    void change(pockemom* p){
         (*p).atteck = 70;
           (*p).hp = 60;
           (*p).speed=120;
            (*p).tier = 'S';
            strcpy((*p).name,"Raichu");
            p->atteck=90;
            return ;
    }
int main () {
    pockemom pickachu;
    pickachu.atteck = 50;
    pickachu.hp = 40;
    pickachu.speed = 100;
    pickachu.tier = 'A';
    strcpy(pickachu.name,"Pickachu");
    printf("%s\n",pickachu.name);
    printf("%d\n",pickachu.atteck);
    printf("%d\n",pickachu.hp);
    printf("%d\n",pickachu.speed);
    printf("%c\n",pickachu.tier);
    change(&pickachu);

    printf("%s\n",pickachu.name);
    printf("%d\n",pickachu.atteck);
    printf("%d\n",pickachu.hp);
    printf("%d\n",pickachu.speed);
    printf("%c",pickachu.tier);


    return 0;
}