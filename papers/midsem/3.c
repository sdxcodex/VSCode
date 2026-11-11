// #include <stdio.h>
// int main () {
//    printf("enter (1 for 1 to 32 , 2 for 33 to 52 , 3 for 53 to 72,4 for 73 to 92)");
//    int x;
//    scanf("%d",&x);
//    switch(x){
//     case  1: 
//          printf("India");
//          break;
//     case 2: 
//          printf("USA");
//          break;

//     case  3: 
//          printf("China");
//          break;

//     case 4: 
//          printf("Japan");
//          break;
   
//    default :
//    printf("Invalid input");
//    }









//     return 0;
// }


#include <stdio.h>

int main()
{
    int code;
    scanf("%d", &code);

    switch(code)
    {
        case 1 ... 32:
            printf("India");
            break;

        case 33 ... 52:
            printf("USA");
            break;

        case 53 ... 72:
            printf("China");
            break;

        case 73 ... 92:
            printf("Japan");
            break;

        default:
            printf("Invalid code");
    }

    return 0;
}