#include <cs50.h>
#include <stdio.h>
#include <string.h>

void quicksort(int array[], int start, int end) {
int pivot=0, temp;

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
}

int main(void) {
    int array[6] = {2, 8, 9, 1, 3, 4};
    quicksort(array, 0, 5);
}