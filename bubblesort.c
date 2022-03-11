#include <cs50.h>
#include <stdio.h>
#include <string.h>

void bubblesort(int array[], int length) {
int i,j,k,temp;

    for(i=0;i<3;i++) {
            for(j=0;j<2;j++) {
                if (array[j]>array[j+1]) {
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    }
                }
            }
        for(k=0;k<4;k++){
        printf("%d", array[k]);
         }
        printf("\n");
}

int main (void)
{
int array[4] = {5, 3, 1, 9};
    bubblesort(array, 4);
    }