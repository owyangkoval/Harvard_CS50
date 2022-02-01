#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){

string text = get_string("Text: ");

int i;
char letters = atoi(text);

    //counting letters
    for(i=0;i<=strlen(text);i++)
        if (isalpha(letters))
        {
        printf("%s\n",text);
        printf("%i\n", letters);
        letters++;
        }
    else
        {
        return 0;
        }
}