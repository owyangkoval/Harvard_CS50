#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {5, 3, 1, 9};
int i;
int found=0;

for (i=0;i<4;i++) {
    if(array[i]==8) {
        printf("Index found at %d\n",i);
        }
    }
        else (found==0) {
        printf("Element not found\n");
        }
}