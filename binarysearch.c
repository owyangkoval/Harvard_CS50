#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[6] = {1, 2, 3, 7, 9, 10};
int l=0;
int r=5;
int i=0;
int mid = (l+r)/2;

while(l<=r){
    if(array[mid]==2) {
        return mid;
        printf("Index found at %d\n", array[mid]);
        break;
            }
    if (array[mid]>2) {
        r = mid-1;
        printf("Index found at %d\n", array[r]);
        break;
            }
    else {
        l = mid+1;
        printf("Index found at %d\n", array[l]);
        break;
            }
        }
    if(i==6) {
    printf("Element not found\n");
    }
    return -1;
}