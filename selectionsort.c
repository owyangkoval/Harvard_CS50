#include <cs50.h>
#include <stdio.h>
#include <string.h>

void selectionsort(int array[], int length) {
int i, j, k, temp;

   for (i=0; i<length-1; i++) {
        int min = i;
            for (j=i+1; j<length; j++) {
                if (array[j] < array[min]) {
                    min = j;
                    }
                    if (min != i) {
                    temp = array[j];
                    array[j] = array[min];
                    }
                }
            }
        for(k=0; k<length; k++) {
            printf("%d",array[k]);
        }
    printf("\n");
}

int main (void) {

    int array[4] = {5, 3, 1, 9};
    selectionsort(array, 4);
}