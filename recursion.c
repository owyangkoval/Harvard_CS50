#include <stdio.h>

int fib(int i) {
int j=0;
   if (i==1)
    return 1;
   j = fib(i-1)+fib(i-2);
   return j;
   printf("%d", j);
}

int main(void) {
    int i=0;
    int k=fib(55);
}
