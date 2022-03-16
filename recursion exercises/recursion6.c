#include <stdio.h>

int digitsum(int i) {
   if (i>10)
   return 0;
   else
   int k = (i/10) + (i%10)
   return k;
}


int main(void) {
int i; int j;

   printf("Integer: ");
   scanf("%d",&i);
   j = digitsum(i);
   printf("The number of digits in the number is : %d\n", j);
}