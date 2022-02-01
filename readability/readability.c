#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void){

string text = get_string("Text: ");
printf("%s\n",text);

int i;
int lsum=0;
int letters=0;
int count_letters(string text);

    //counting letters
    for(i = 0; i < strlen(text); i++){
        if(isalpha(text[i]))
            {
            lsum = lsum+1;
            }
    }
            printf("%i",lsum);
           printf("\n");
}
