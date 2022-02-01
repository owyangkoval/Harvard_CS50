#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main(void){

string text = get_string("Text: ");
printf("%s\n",text);

int i = 0;
int letters = 0;

    //counting letters
    if(i<strlen(text))
        {
            letters = letters + 1;
            printf("%i letters\n",letters);
            letters++;
        }
}