#include <cs50.h>
#include <stdio.h>
#include <string.h>

int binarysearch(array, n, data) {
int l=0;
int r=n-1;
int mid = (l+r)/2;

while(l<=r){
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


int main(void) {

int array[] = {1, 2, 3, 7, 9, 10};
int data = 3;




}