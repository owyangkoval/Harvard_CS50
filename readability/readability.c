#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    string statement = get_string("Statement: ");

printf("Grade  ");
    for (int i = 0, n = strlen(statement); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}