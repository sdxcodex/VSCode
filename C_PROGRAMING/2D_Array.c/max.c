 #include <stdio.h>
int main () {
    int n;
    printf("Number of stdents : ");
    scanf("%d",&n);
    int a[n][n];
   
    int b=0,c=0,e=0,f=0;
    for(int i =0;i<n;i++){

        for(int j =0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
 int max = a[0][0];
    int min = a[0][0];

     for(int i =0;i<n;i++){

        for(int j =0;j<n;j++){
           if(min>a[i][j]) {min = a[i][j];
            e=i;
            f=j;
           }
        if(max<a[i][j]) {max = a[i][j];
           b=i;
           c=j;
        }
        }
    }
    printf("the max elment is %d also its indises (%d,%d)\n",max,b,c);
    printf("the min elment is %d also its indises (%d,%d)\n",min,e,f);
    









    return 0;
}


// #include <stdio.h>

// int main() {
//     int n;

//     printf("Number of students: ");
//     scanf("%d", &n);

//     int a[n][n];

//     // Input matrix
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int max = a[0][0];
//     int min = a[0][0];

//     int b = 0, c = 0; // max indices
//     int e = 0, f = 0; // min indices

//     // Find max and min
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {

//             if(min > a[i][j]) {
//                 min = a[i][j];
//                 e = i;
//                 f = j;
//             }

//             if(max < a[i][j]) {
//                 max = a[i][j];
//                 b = i;
//                 c = j;
//             }
//         }
//     }

//     printf("The max element is %d and its indices are (%d,%d)\n",
//            max, b, c);

//     printf("The min element is %d and its indices are (%d,%d)\n",
//            min, e, f);

//     return 0;
// }