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
    for (int i = 1; i <= n; i++)
    {
        // For each column
        for (int j = 1; j <= 2*n - 1; j++)
        {
            if (j >= n-(i-1) && j <= n+(i-1))
        { printf("#");
        }
        else
        { printf(" ");
        }

        // Move to next row
        printf("\n");
    }

 }
}