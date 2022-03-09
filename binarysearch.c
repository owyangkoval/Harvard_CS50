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
    if(9==array[mid]) {
        printf("Index found at %d\n", array[mid]);
        break;
            }
    if (9<array[mid]) {
        r = mid-1;
        printf("Index found at %d\n", array[i]);
        break;
            }
    else {
        l = mid+1;
        printf("Index found at %d\n", array[i]);
        break;
            }
        }
    if(i==6) {
    printf("Element not found\n");
    }
    return -1;
}