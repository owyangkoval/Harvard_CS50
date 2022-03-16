#include <stdio.h>

int countdigits(int i) {
int k=0;
   if (i>=0) {
   countdigits(i/=10);
   k++;
   printf("The number of digits in the number is : %d", k);
   }
return 1;
}


int main(void) {
int i;

   printf("Integer: ");
   scanf("%d",&i);
   countdigits(i);
}