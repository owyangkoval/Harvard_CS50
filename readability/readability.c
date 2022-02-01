#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void){

string text = get_string("Text: ");
printf("%s\n",text);

int i;
int letters;

    //counting letters
    for(i=0;i<strlen(text);i++){
        if((text[i] <= 'Z' && text[i] >= 'A') || (text[i] <= 'z' && text[i] >= 'a'))
        {
            letters = letters + 1;
            printf("%i letters",letters);
        }
    }
}