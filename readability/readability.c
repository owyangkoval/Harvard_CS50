#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main(void){

string text = get_string("Text: ");
printf("%s\n",text);

int i; int letters=0; int words=0; int sentences=0;
float letteravg=0; float sentenceavg=0; float index=0;
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


    //count words
    for(i = 0; i < strlen(text); i++){
        if((text[i])==' ')
            {
                    words = words+1;
            }
        }
            printf("%i words", words);
           printf("\n");


    //count sentences
    for(i = 0; i < strlen(text); i++){
        if((text[i])=='.' || (text[i])=='?' || (text[i])=='!')
            {
                    sentences = sentences+1;

            }
        }
            printf("%i sentences", sentences);
           printf("\n");

    //letter average and sentence average
    for(i = 0; i < strlen(text); i++){
            {
                letteravg=((float)letters/words)*100;
                sentenceavg=((float)sentences/words)*100;
            }
        }
        printf("%f\n", letteravg);
        printf("%f\n", sentenceavg);

    //coleman-liau
    for(i = 0; i < strlen(text); i++){
        {
            index=(0.0588*letteravg)-(0.296*sentenceavg)-15.8;
        }
    }
        printf("Grade %f\n", round(index));
}
