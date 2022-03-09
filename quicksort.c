#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[6] = {2, 8, 10, 1, 3, 4};
int start = 0;
int end = 5;
int pivot = 0;

while (start>end) {
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
    }
    if (start>end) {
        temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        return end;
    }
}