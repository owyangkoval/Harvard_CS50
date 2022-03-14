#include <cs50.h>
#include <stdio.h>
#include <string.h>

int partition(int array[], int lowerbound, int upperbound) {
int pivot=0, start=lowerbound, end=upperbound, temp;

while(start<end) {
    while(array[start]<=pivot) {
        start++;
        }
    while(array[end]>pivot) {
        end--;
        }
    if (start<end) {
        temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        }
    }
    temp = array[lowerbound];
    array[lowerbound]=array[end];
    array[end]=temp;
    return end;
}

void quicksort (int array[], int lowerbound, int upperbound, int length) {
    if (lowerbound<upperbound) {
        int location = partition(array, upperbound, lowerbound);
        quicksort(array, lowerbound, location-1)
        quicksort(array, location+1, upperbound);
        }
    for(k=0;k<length;k++){
        printf("%d", array[k]);
        }
        printf("\n");
    }
}



int main(void) {
    int array[6] = {2, 8, 9, 1, 3, 4};
    quicksort(array, 0, 5, 6);
}