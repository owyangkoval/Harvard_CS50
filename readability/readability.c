#include <stdio.h>
#include <ctype.h>
#include "cs50.h"

int count_letters (string s)
{
    int n = 0;

    while (*s)                  /* while not the nul-character */
        if (isalpha (*s++))     /* check if current is letter, advance ptr */
            n++;                /* increment letter count */

    return n;                   /* return letter count */
}

int main (void) {

    string text = get_string ("Text: ");

    printf ("Number of letters: %d\n", count_letters(text));
}
