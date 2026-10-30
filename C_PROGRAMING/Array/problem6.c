#include <stdio.h>



int main()

{

int a[5] = {2, 34, 122, 376, 2};

for(int i = 0; i < 5 / 2; i++)

{

int temp = a[i];

a[i] = a[4 - i];

a[4 - i] = temp;

}



printf("Reversed array: ");



for(int i = 0; i < 5; i++)

{

printf("%d ", a[i]);

}



return 0;

}
