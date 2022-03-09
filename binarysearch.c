#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[6] = {1, 2, 3, 7, 9, 10};
int l=0;
int r=5;

while(l<r){
    int mid = (l+r)/2;
    if(10==array[mid]) {
        printf("Index found at %d\n", mid);
            }
    else if (10<array[mid]) {
        r = mid-1;
        printf("Index found at %d\n", r);
            }
    else {
        l = mid+1;
        printf("Index found at %d\n", l);
            }
        }
    return -1;
    }