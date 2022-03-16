#include <cs50.h>
#include <stdio.h>
#include <string.h>

void insertionsort(int array[], int length) {
int i,j,k,temp;

   for (i=1; i<3; i++) {
        temp = array[i];
        j = i-1;
        while (j >= 0 && array[j] > temp) {
            array[j+1] = array[j];
            j--;
            }
        array[j+1] = temp;
        }

    for(k=0;k<4;k++){
        printf("%d", array[k]);
         }
        printf("\n");
}


int main (void)
{
int array[4] = {5, 3, 1, 9};

    insertionsort(array, 4);
    }

