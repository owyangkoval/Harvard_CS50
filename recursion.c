#include <stdio.h>

int fib(int series[], int n) {
if(n == 1) {
      return 1;
   }
else {
   return (fib(n-1)+fib(n-2));
   printf("%d ",series[n]);
   }
}

int main() {
   int k;
   int series[10]={1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

   k = fib(series, 55);
}