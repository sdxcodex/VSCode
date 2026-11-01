#include <stdio.h>
int main () {
    typedef struct pockemon
    {  int hp;
        int atteck;
        int speed;
        char ch;       
    }pockemon;
    typedef struct  legend
    {
        int spetial;
        pockemon x;
    }legend;
    typedef struct god{
        legend p;
        char ability[50];
    }god;
    god mew;
    mew.p.spetial=1000;
    printf("%d",mew.p.spetial);
    





    return 0;
}