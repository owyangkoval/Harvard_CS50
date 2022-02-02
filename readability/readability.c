#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){

string text = get_string("Text: ");
printf("%s\n",text);

int i; int letters=0; int words=1;

int count_letters(string text);
int count_words(string text);

    //count letters
    for(i = 0; i < strlen(text); i++){
        if(isalpha(text[i]))
            {
            letters = letters+1;
            }
    }
            printf("%i letters",letters);
           printf("\n");


    //count words
    for(i = 0; i < strlen(text); i++){
        if((text[i])==' ')
            {
                words = words+1;
            }
    }
            printf("%i words", words);
           printf("\n");

}
