#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
int array[4] = {3, 5, 1, 9};

   for (int i=0; i<3; i++) {
        int min = i;
            for (int j=i+1; j<4; j++)  {
                if (array[j] < array[min]) {
                    array[j] = array[min];
                    printf("%d", array[j]);
                    min = j;
                    }
                    int temp = array[i];
                    array[i] = array[min];
                    array[min] = temp;
                }
            }
        printf("\n");
}