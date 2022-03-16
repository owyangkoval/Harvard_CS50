#include <stdio.h>

int digitsum(int i) {
int k=0;
   if (i<=0)
   return 0;
   else
   k = (i/10) + (i%10);
   return k;
}


int main(void) {
int i; int j;

   printf("Integer: ");
   scanf("%d",&i);
   j = digitsum(i);
   printf("The sum of the digits in the number is : %d\n", j);
}