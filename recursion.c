#include <stdio.h>

int even(int i) {
int j = 0;
int k = 0;

   if(i<=2) {
   return 2;
   }
   else if (i>2) {
   j = even(i-2);
   return j;
   }
}

int main() {
int array[6];
int i;

even(14);

for(i=0; i < 5; ++i) {
    printf("Enter number%d: ",i);
    scanf("%d", &array[i]);

printf("The elements in the array are : ", average);
printf("\n");
   }
}