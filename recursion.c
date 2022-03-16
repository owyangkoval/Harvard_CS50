#include <stdio.h>

int digits(int i) {
int k = 0;
   if (i>=0) {
   printf("Integer: ");
   scanf("%d",&i);
   digits(i/=10);
   k=k+1;
   }
   printf("The number of digits in the number is : %d", k);
   return k;
}


int main(void) {

   digits(50);
}