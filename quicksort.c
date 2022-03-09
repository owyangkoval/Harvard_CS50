#include <cs50.h>
#include <stdio.h>
#include <string.h>

int void (main)
    int array[6] = {2, 8, 9, 1, 3, 4};
    int pivot = array[0];
    for(int k=0;k<6;k++){
        printf("%d", array[k]);
            }
        printf("\n");
}

void partition(int array[], array[start], array[end], pivot) {
int temp;

while(array[start]<=pivot) {
        start++;
        }
while(array[end]>pivot) {
        end--;
        }
if (start<end) {
        temp=array[end];
        array[end]=array[start];
        array[start]=temp;
        }
if (start>end) {
        temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        }
