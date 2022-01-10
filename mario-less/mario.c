#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 0);

    // For each row
    for (int i = 1; i <= 8; i++)
    {
        // For each column
        for (int j = 1; j <= 8; j++)
        {
            // Print a brick
            printf("#");
        }

        // Move to next row
        printf("\n");
    }
}