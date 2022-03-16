#include <stdio.h>

int digits(int i) {
int k=0;
   if (i>=0) {
   digits(i/=10);
   k=k+1;
   }
   printf("The number of digits in the number is : %d", k);
   return k;
}


int main(void) {
int i;

   printf("Integer: ");
   scanf("%d",&i);
   digits(i);
}