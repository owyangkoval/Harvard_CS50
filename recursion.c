#include <stdio.h>

int even(array[], int i) {
int j = 0;
int k = 0;

   if(i<=2) {
   return 2;
   }
   else if (i>2) {
   j = even(i-2);
   printf("Element - %d: %d", k, j);
   printf("\n");
   return j;
   }
}

int main() {
int array[6]= {}
   even(14);
}