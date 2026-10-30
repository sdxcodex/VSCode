#include <stdio.h>

int main() {
int n, i;
printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n];

printf("Enter array elements: ");
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

int isPalindrome = 1;

for(i = 0; i < n / 2; i++) {
if(arr[i] != arr[n - 1 - i]) {
isPalindrome = 0;
break;
}
}

if(isPalindrome)
printf("Array is a palindrome.\n");
else
printf("Array is not a palindrome.\n");

return 0;
}