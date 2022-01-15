#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void);
{
    int i = get_int("Size: ");
    int row, column, space;

    for (row = 0; row < 9; row++)
    {
        printf("#");
    }
     for (column = 0; column < 9; column++)
    {
        printf(" ");
    }
}