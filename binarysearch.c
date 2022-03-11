#include <cs50.h>
#include <stdio.h>
#include <string.h>

void bubblesort(int array[], int length) {
int i, j, k, temp;

    for(i=0;i<5;i++) {
            for(j=0;j<4;j++) {
                if (array[j]>array[j+1]) {
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    }
                }
            }
        for(k=0;k<6;k++){
        printf("%d", array[k]);
         }
        printf("\n");
    }


void binarysearch(int array[], int length) {
int l=0;
int r=5;

while(l<=r){
    int mid = (l+r)/2;
    if(array[mid]==10) {
        printf("Index found at %d\n", mid);
        break;
            }
    else if (array[mid]>10) {
        r = mid-1;
            }
    else {
        l = mid+1;
            }
    }
}

int main (void)
{
int array[6] = {10, 2, 1, 7, 9, 3};
    bubblesort(array, 6);
    binarysearch(array, 6);
}