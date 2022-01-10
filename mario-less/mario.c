#include <cs50.h>
#include <stdio.h>

string hash(int);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 0 || n > 8);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            for(int j = 0; j < i+1; j++)
            {
                printf(".");
            }
            printf("#");
        }
        printf("\n");
    }


}