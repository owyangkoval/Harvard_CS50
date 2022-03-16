#include <stdio.h>

void f() {
   for (int i = 0; i < 1; ++i) {
      printf("pusheen\n");
   }
}

f();

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