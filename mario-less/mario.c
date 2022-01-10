#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int n;
do
{
    n = get_int("Height: ");
}
while (n < 1 || n > 8);
// this for loop makes new lines
for (int i = 0; i < n; i++)
{
    // here I have two for loops nested inside the above for loop,
    // I previously made the mistake of having two inner loops nested.

    // this 2nd for loop prints n-1-i spaces
    // because if n=5, then in the 4th row, there will be 5-1-3 spaces/dots
    for (int j = 0; j < n - 1 - i; j++)
    {
        printf(" ");
    }
    // this 3rd for loop prints i+1 hashes
    // because if n=5, then in the 4th row, there will be 3+1 hashes.
    // (3 because you count from 0)
    for (int j = 0; j < i + 1; j++)
    {
        printf("#");
    }

    // here I have two for loops nested inside the above for loop,
    // I previously made the mistake of having two inner loops nested.

    // this 2nd for loop prints n-1-i spaces
    // because if n=5, then in the 4th row, there will be 5-1-3 spaces/dots
    for (int j = 0; j < n + 1 - i; j++)
    {
        printf(" ");
    }
    // this 3rd for loop prints i+1 hashes
    // because if n=5, then in the 4th row, there will be 3+1 hashes.
    // (3 because you count from 0)
    for (int j = 0; j < i - 1; j++)
    {
        printf("#");
    }
    printf("\n");

}
}