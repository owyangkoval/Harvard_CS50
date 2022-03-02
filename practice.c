#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {5, 3, 1, 9};
int i,j,k,temp;

   for (i=0; i<3; i++) {
        int min = i;
            for (j=i+1; j<4; j++) {
                if (array[j] < array[min]) {
                    array[min] = array[j];
                    min = j;
                                    printf("%d",array[i]);
                    }
                    if (min != i) {
                    temp = array[i];
                    array[i] = array[min];
                    array[min] = temp;
                    }
                }
            }
        printf("\n");
    }