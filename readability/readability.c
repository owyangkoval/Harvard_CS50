#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){

string text = get_string("Text: ");
printf("%s\n",text);

int i = 0;
char letters = 0;

    //counting letters
    while(i<=strlen(text))
        if (isalpha(letters))
        {
        printf("Your input is alphabetical.\n");
        }
    else
        {
        printf("Your input is not alphabetical.\n");
        }
}