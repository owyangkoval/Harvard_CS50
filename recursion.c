#include <stdio.h>

int digits(int i) {
   if (i<=0) {
   printf("Integer: ",i);
   scanf("%d",&i);
   digits(i/=10);
   }
}

int main() {
   digits(i)
   printf("The number of digits in the number is : ", k);
}