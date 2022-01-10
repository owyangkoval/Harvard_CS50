#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 23) ;


    // For each row
    for (int i = 0; i < n - 1; i++)
    {
        // For each column
        for (int j = 0; j < n + 2; j++)
        {
            // Print a pyramid
            printf("#");
        }

        // Move to next row
        printf("\n");
    }
}