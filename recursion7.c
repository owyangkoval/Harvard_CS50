#include <stdio.h>

int gcdnum(int i, int j) {
int k=0;
   while (i!=j) {
      if (i>j)
         return(i, i-j);
      else
         return(i, j-1);
   }
   return i;
}

int main(void) {
int i, j, k;

   printf("Input 1st number: ");
   scanf("%d",&i);
   printf("Input 2nd number: ");
   scanf("%d",&j);

    k = gcdnum(i, j)
   printf("The GCD of %d and %d is: %d\n", i,j,k);
   return 0;
}
