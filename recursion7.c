#include <stdio.h>

int secondnum(int j) {
    if(j<=0)
    return 0;
    else {
    return j;
    }
}

int gcdnum(int i) {
int k=0; int j=0;
   if (i<=0)
   return 0;
   else {
   k = gcdnum(i/(i/j);
   return k;
   }
}

int main(void) {
int i, j, k, l;

   printf("Input 1st number: ");
   scanf("%d",&i);
   printf("Input 2nd number: ");
   scanf("%d",&j);

    k = gcdnum(i);
    l = secondnum(j);
   printf("The GCD of %d and %d is: %d\n", i,j,k);
}