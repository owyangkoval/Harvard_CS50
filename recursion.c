#include <stdio.h>

int fibbonacci(int i) {
if(i == 1) {
      return 1;
   }
else {
      int j = (fibbonacci(i) + fibbonacci(i-2));
      return j;
   }
}

int main() {
   int k;

   k = fibbonacci(55);
      printf("%d ",k);
}