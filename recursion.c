#include <stdio.h>

int evenset(int i) {
int j = 0;

   if(i<=2)
      return 2;
   else
      return evenset(i-2);
}


int main() {
int array[6];
int i;

   for(i=0; i < 5; ++i) {
       printf("Enter number %d: ",i);
      scanf("%d", &array[i]);

   evenset(14);

   printf("The elements in the array are :%d", evenset(i));
   printf("\n");
      }
}