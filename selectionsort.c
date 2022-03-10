#include <cs50.h>
#include <stdio.h>
#include <string.h>

int selectionsort(int i, int j, int array[]) {

   for (i=0; i<3; i++) {
        int min = i;
            for (j=i+1; j<4; j++) {
                if (array[j] < array[min]) {
                    min = j;
                    return min;
                    }
                }
                    if (min != i) {
                    int temp = array[j];
                    array[j] = array[min];
                    array[min] = temp;
                    }
                }
}


int main (void) {
int array[4] = {5, 3, 1, 9};

    sorted = selectionsort()
        printf("\n");
    }