#include <stdio.h>

int gcdnum(int a, int b) {
int i=1;
   while (a!=b) {
      if(a==0) return b;
      if(b==0) return a;
   if (a>b) {
      return gcdnum(a%b,b);
         }
   else {
      return gcdnum(a,b%a);
      }
   }
   return 1;
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

