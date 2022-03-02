#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {5, 3, 1, 9};
int i,j,temp;

   for (i=0; i<3; i++) {
        int min = i;
            for (j=i+1; j<4; j++) {
                if (array[j] < array[min]) {
                    array[j] = array[min];
                    min = j;
                    }
                    if (min != i) {
                    temp = array[i];
                    array[i] = array[min];
                    array[min] = temp;
                    }
                }
            for(j = ; j < 4; j++){
            printf("%d", array[j]);
    }
            }
        printf("\n");
}