#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    int i = get_int("Size: ");
    int row;

    //row
    for (row = 0; row < 9; row++)
    {
        printf("#\n");
        i = i + 1;
    }
}
