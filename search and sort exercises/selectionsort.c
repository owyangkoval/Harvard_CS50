#include <cs50.h>
#include <stdio.h>
#include <string.h>

void selectionsort(int array[], int length) {
int i, j, temp;

   for (i=0; i<3; i++) {
        int min = i;
            for (j=i+1; j<4; j++)  {
                if (array[j] < array[min]) {
                    min = j;
                        }
                    }
            if (min != i) {
                temp = array[i];
                array[i] = array[min];
                array[min] = temp;
                    }
            }
        for(int k=0; k<4; k++) {
            printf("%d",array[k]);
        }
        printf("\n");
}

int main (void) {

    int array[] = {5, 3, 1, 9};
    selectionsort(array, 4);
}