// #include <stdio.h>
// int main () {
//     int n;
//     scanf("%d",&n);
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int sum =0,d=0;
//     while(a){
//         sum+=500;
//         if(sum>n){
//             sum-=500;
//             break;
//         }
//         d++;
//         a--
//     }
//     while(b){
//         sum+=200;
//         if(sum>n){
//             sum-=200;
//             break;
//         }
//         d++;
//         b--;
//     }
//     while(c){
//         sum+=100;
//         if(sum>n){
//             sum-=100;
//             break;
//         }
//         d++;
//         c--;
//     }
//     if(sum==n){
//         printf("Done\n");
//         printf("%d",d);
//     }
//     else printf("NO");

//     return 0;
// }


#include <stdio.h>

int main()
{
    int amount;
    int stock500, stock200, stock100;

    scanf("%d", &amount);
    scanf("%d %d %d", &stock500, &stock200, &stock100);

    int found = 0;
    int minNotes = 1000000;

    int best500 = 0, best200 = 0, best100 = 0;

    for(int i = 0; i <= stock500; i++)
    {
        for(int j = 0; j <= stock200; j++)
        {
            for(int k = 0; k <= stock100; k++)
            {
                int total = i * 500 + j * 200 + k * 100;

                if(total == amount)
                {
                    int notes = i + j + k;

                    if(!found ||
                       notes < minNotes ||
                       (notes == minNotes && i > best500))
                    {
                        found = 1;
                        minNotes = notes;

                        best500 = i;
                        best200 = j;
                        best100 = k;
                    }
                }
            }
        }
    }

    if(found)
    {
        printf("YES\n");
        printf("500 x %d\n", best500);
        printf("200 x %d\n", best200);
        printf("100 x %d\n", best100);
        printf("Total Notes = %d\n", minNotes);
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}