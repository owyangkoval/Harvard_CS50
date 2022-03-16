#include <cs50.h>
#include <stdio.h>
#include <string.h>


void linearsearch(int array[], int length) {
int i;

for (i=0;i<4;i++) {
    if(array[i]==9) {
        printf("Index found at %d\n",i);
        break;
        }
    }
        if(i==4) {
        printf("Element not found\n");
        }
}


int main (void)
{
int array[4] = {5, 3, 1, 9};
    linearsearch(array, 4);
}
