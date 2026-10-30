// #include <stdio.h>
// #include <string.h>
// int main () {
//    int n,t;
//    scanf("%d %d",&n,&t);
//    char s[n],a[n];
//    scanf("%s",s);
//    for(int i=0;i<n;i++){
//     if(s[i]=='B'){
//         if(s[i+1]=='G'){
//             char temp = a[i];
//             a[i] = a[i+1];
//             a[i+1] = temp;
//             i++;
//         }
//     }
//     else { 
//         a[i] = s[i];
//     }
//    }
//    for(int i =0;i<n;i++){
//       printf("%c",a[i]);
//    }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, t;
//     scanf("%d %d", &n, &t);

//     char s[n + 1];
//     scanf("%s", s);

//     for(int k = 0; k < t; k++) {

//         for(int i = 0; i < n - 1; i++) {

//             if(s[i] == 'B' && s[i + 1] == 'G') {

//                 char temp = s[i];
//                 s[i] = s[i + 1];
//                 s[i + 1] = temp;

//                 i++; // skip next position
//             }
//         }
//     }

//     printf("%s", s);

//     return 0;
// }



#include <stdio.h>
#include <string.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    char s[n + 1];
    char a[n + 1];

    scanf("%s", s);

    while(t--) {

        strcpy(a, s);     // copy current queue

        for(int i = 0; i < n ; i++) {

            if(s[i] == 'B' && s[i + 1] == 'G') {

                a[i] = 'G';
                a[i + 1] = 'B';

                i++;      // skip next position
            }
        }

        strcpy(s, a);     // update queue
    }

    printf("%s\n", s);

    return 0;
}