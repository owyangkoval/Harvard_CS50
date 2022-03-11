#include <cs50.h>
#include <stdio.h>
#include <string.h>

void selectionsort(int array[], int length) {
int i, j, temp;

   for (i=0; i<5; i++) {
        int min = i;
            for (j=i+1; j<6; j++) {
                if (array[j] < array[min]) {
                    min = j;
                        }
                    if (min != i) {
                    temp = array[j];
                    array[j] = array[min];
                        }
                    }
                }
        for(int k=0; k<4; k++) {
            printf("%d",array[k]);
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
    return -1;
}

int main (void)
{
int array[6] = {10, 2, 1, 7, 9, 3};

}