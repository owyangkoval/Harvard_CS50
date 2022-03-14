#include <stdio.h>

int fibbonacci(int n) {
if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int i;

   i = fibbonacci(55);
      printf("%d ",i);
}