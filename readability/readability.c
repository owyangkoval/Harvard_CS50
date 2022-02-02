#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main(void){

string text = get_string("Text: ");
printf("%s\n",text);

int i; int letters=0; int words=1; int sentences=0;
float letteravg=0; float sentenceavg=0;
int grade;

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


    //count words and letter average
    for(i = 0; i < strlen(text); i++){
        if((text[i])==' ')
            {
                    words = words+1;
                    letteravg=(letters/words)*100;
            }
        }
            printf("%i words", words);
            printf("%f\n", letteravg);
           printf("\n");


    //count sentences and sentence average
    for(i = 0; i < strlen(text); i++){
        if((text[i])=='.' || (text[i])=='?' || (text[i])=='!')
            {
                    sentences = sentences+1;
                    sentenceavg=(sentences/words)*100;
            }
        }
            printf("%i sentences", sentences);
            printf("%f\n", sentenceavg);
           printf("\n");

}
