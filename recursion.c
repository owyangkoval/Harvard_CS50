#include <stdio.h>

int fib(int i) {
int j=0;
   if (i==1)
    return 1;
   j = i+fib(i-1);
   return j;
}

int main(void) {
    int i=0;
    int k=fib(55);
    printf("The sum of numbers from 1 - 5: %d\n", k);
}
