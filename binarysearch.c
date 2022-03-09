#include <cs50.h>
#include <stdio.h>
#include <string.h>

int binarysearch(array, n, data) {
int l=0;
int r=n-1;

while(l<=r){
    int mid = (l+r)/2;
    if(data==array[mid]) {
        return mid;
            }
    if (data<array[mid]) {
        r = mid-1;
            }
    else {
        l = mid+1;
            }
        }
    return -1;
}

