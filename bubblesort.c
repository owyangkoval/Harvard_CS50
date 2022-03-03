#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {5, 3, 1, 9};
int i,j,temp;

    for(i=0;i<3;i++) {
            for(j=0;j<2;j++) {
                if(array[j]>array[j+1]) {
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                    }
                }
            for(i=0;i<4;i++){
            printf("%d", array[i]);
            }
         }
        printf("\n");
    }