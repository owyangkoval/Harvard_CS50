#include <cs50.h>
#include <stdio.h>
#include <string.h>

void quicksort(int array[], int start, int end) {
int array[start] = 0;
int array[end] = 5;
int pivot; int temp;

    while(array[start]<=pivot) {
        start++;
        }
    while(array[end]>pivot) {
        end--;
        }
    if (start<end) {
        int temp=array[end];
        array[end]=array[start];
        array[start]=temp;
        }
    if (start>end) {
        temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        }
}

int main(void) {
    int array[6] = {2, 8, 9, 1, 3, 4};
    for(int k=0;k<6;k++){
        printf("%d", array[k]);
            }
        printf("\n");
}
