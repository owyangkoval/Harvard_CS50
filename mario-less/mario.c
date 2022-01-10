#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int n;
do
{
    n = get_int("Size: ");
}
while (n < 1 || n > 8);
// this for loop makes new lines

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n - 1 - i; j++)
    {
        printf(" ");
    }

// for further examination
    for (int j = 0; j < n; j++)
    {
        printf(" ");
    }

    for (int j = 0; j < i + 1; j++)
    {
        printf("#");
    }

    for (int j = 0; j > n - 1 - i; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < i + 1; j++)
    {
        printf("#");
    }
    printf("\n");

}
}