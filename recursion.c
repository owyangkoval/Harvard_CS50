#include <stdio.h>

int digits(int i) {
   if (i>=0) {
   printf("Integer: ");
   scanf("%d",&i);
   digits(i/=10);
   return 1;
   }
}

int main() {
   int i;
   k = digits(i);
   printf("The number of digits in the number is : ", k);
}