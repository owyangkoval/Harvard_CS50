#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void){

int i; int c=0;

    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    // Score both words
    int score1 = compute_score(word1);
    for(i=0;i<strlen(word1);i++){
        if (word1[i] >= 'a' && word1[i] <= 'z')
                {
                //Lowercase Formula for cipher using key
                int word1t=word1[i]-'a';
                }
            else if (word1[i] >= 'A' && word1[i] <= 'Z')
                {
                int word1=word1[i]-'A';
                }
            }

    int score2 = compute_score(word2);
    for(i=0;i<strlen(word1);i++){
        if (word2[i] >= 'a' && word2[i] <= 'z')
                {
                //Lowercase Formula for cipher using key
                int word2=word2[i]-'a';
                }
            else if (word2[i] >= 'A' && word2[i] <= 'Z')
                {
                int word2=word2[i]-'A';
                }
            }

    // TODO: Print the winner



int compute_score(string word);

    // TODO: Compute and return score for string

}