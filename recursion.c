#include <stdio.h>

int digits(int i) {
   if (i>=0) {
   printf("Integer: %d",i);
   scanf("%d",&i);
   digits(i/=10);
   return i;
   }
}

int main() {
   k = digits(i);
   printf("The number of digits in the number is : ", k);
}