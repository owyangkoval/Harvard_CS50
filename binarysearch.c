#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[6] = {1, 2, 4, 7, 9, 10};
int l=0;
int r=5;
int mid = (l+r)/2;

while(l<=r){
    if(3==array[mid]) {
        return mid;
        printf("Index found at %d\n", array[mid]);
    }
    else if(3<array[mid]) {
        r = mid-1;
    }
    else {
        l = mid+1;
    }
}
    return -1;
}