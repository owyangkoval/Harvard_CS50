#include <stdio.h>

int digits(int i) {
int j;
   if (i>=0) {
   printf("Integer: ");
   scanf("%d",&i);
   j = digits(i/=10);
   return j;
   }
}

int main() {
   int i;
   k = digits(i);
   printf("The number of digits in the number is : ", k);
}