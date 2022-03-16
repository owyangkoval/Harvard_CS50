#include <stdio.h>

int digits(int i) {
int k=0;
   if (i>=0) {
   digits(i/=10);
   k++;
   printf("The number of digits in the number is : %d", k);
   }
return 1;
}


int main(void) {
int i;

   printf("Integer: ");
   scanf("%d",&i);
   digits(i);
}