#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {5, 3, 1, 9};
int i,j,k,temp;

    for(i=0;i<3;i++) {
        int min = i;
            for(j=i+1;i<4;i++) {
                if(array[j]<array[min]) {
                    min = j;
                    }
                if (min!=i) {
                    
                    }
                }
            for(k=0;k<4;k++){
            printf("%d", array[k]);
            }
        }
        printf("\n");
    }