#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void);

{
    int i = get_int("Size: ");
    int row, column, space;

    //row
    for (row = 0; row < n-1; row++)
    {
        printf(" ");
    }
        //column
        for (column = 0; column < i; column++)
        {
            printf("#");
        }
}