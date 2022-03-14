#include <stdio.h>

int fib(int i) {
int j=0;
   if (i==0)
    return 1;
   j = fib(i-1)+fib(i-2);
   return j;
}

int main(void) {
    int i=0;
    int k=fib(55);
    printf("%d", k);
    printf("\n");
}
