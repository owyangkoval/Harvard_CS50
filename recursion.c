#include <stdio.h>

int fibonacci(int previousnum, int num) {
int i;
if(i == 1) {
      return 1;
   }
else {
   i=1;
   int nextnum = previousnum + num;
   previousnum = num;
   num = nextnum;
   }
}

int main() {
   int k;

   k = fibonacci(55);
      printf("%d ",k);
}