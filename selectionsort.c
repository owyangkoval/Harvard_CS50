#include <cs50.h>
#include <stdio.h>
#include <string.h>

void selectionsort(int array[], int length) {
int i, j, temp;

   for (i=0; i<length-1; i++) {
        int min = i;
            for (j=i+1; j<length; j++) {
                if (array[j] < array[min]) {
                    min = j;
                        }
                    if (min != i) {
                    temp = array[j];
                    array[j] = array[min];
                    array[min] = temp;
                        }
                }
            }
        printf("Sorted Array: ");
}

int main (void) {

    int array[4] = {5, 3, 1, 9};
    selectionsort(array, 4);
        for(int k=0; k<4; k++) {
            printf("%d",array[k]);
        }
        printf("\n");
}