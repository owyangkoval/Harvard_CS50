#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {5, 3, 1, 9};
int i,j,k,temp;

    for(i=0;i<3;i++) {
        int max = i;
            for(j=i+1;j<4;j++) {
                if(array[max]>array[j]) {
                    max = j;
                        }
                }
                    if (max != j) {
                    temp = array[max];
                    array[max] = array[j];
                    array[j] = temp;
                        }
                }
            for(k=0;k<4;k++){
            printf("%d", array[k]);
         }
        printf("\n");
    }