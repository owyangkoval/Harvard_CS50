#include <stdio.h>

void f() {
   printf("pusheen\n");
}

void g() {
   f();
   f();
}

g();

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