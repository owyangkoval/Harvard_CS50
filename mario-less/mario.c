#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    int i = get_int("Size: ");
    int row, column, space;

    //row
    do (row = 0; row < 9; row++)
    {
        printf("#\n");
    }
        for (row = 0; row < (i-1); row++)
        {
            printf(" \n");


        }
}
