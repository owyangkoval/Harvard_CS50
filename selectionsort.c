#include <cs50.h>
#include <stdio.h>
#include <string.h>

int selectionsort(int array[],int i,int j,int temp){

   for (i=0; i<3; i++) {
        int min = i;
            for (j=i+1; j<4; j++) {
                if (array[j] < array[min]) {
                    min = j;
                    }
                }
                    if (min != i) {
                    temp = array[j];
                    array[j] = array[min];
                    array[min] = temp;
                    }
                }
}


int main (void) {
int array[4] = {5, 3, 1, 9};

selectionsort()
        printf("\n");
    }