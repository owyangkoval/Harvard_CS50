#include <stdio.h>

int gcdnum(int a, int b) {
int i=1;
   while (a!=b) {
      if((a/i)==0 &&(b/i)==0)
         return i;
   }
}

int main(void) {
int c, a, b;

   printf("Input 1st number: ");
   scanf("%d",&a);
   printf("Input 2nd number: ");
   scanf("%d",&b);

   c = gcdnum(a,b);
   printf("The GCD of %d and %d is: %d\n", a,b,gcdnum(a,b));
   return 0;
}

