#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {5, 3, 1, 9};
int i,j,k,temp;

    for(i=0;i<3;i++) {
            for(j=i+1;j<4;j++) {
                if(array[i]>array[j]) {
                    i = j;
                        }
                    }
                }
            for(k=0;k<4;k++){
            printf("%d", array[k]);
         }
        printf("\n");
    }