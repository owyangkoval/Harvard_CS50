#include <stdio.h>

void f(int i) {
   if (i > 0) {
      printf("pusheen\n");
      f(i - 1);
      printf("stormy\n");
   } else {
      printf("pip\n");
   }
   return;
}

f(1);

int abs(int x) {
   if (x >= 0) {
      return x;
   } else {
      return -x;
   }
}

int y = abs(-5);
printf("%d\n", y);

int fib(int n) {
if(n <= 1) {
      return 1;
   }
else {
   return (fib(n-1)+fib(n-2));
   printf("%d ",n);
   }
}

int main() {
   int k;
   k = fib(5);
}