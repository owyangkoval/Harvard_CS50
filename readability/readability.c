#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    string statement = get_string("Statement: ");
    int length = strlen(statement);
    printf("%i\n", length);

    int grade, words, sentence, letter_sum, sentence_sum;

    letter_sum = (letters/words)*100;
    sentence_sum = (sentence/words)*100;

    grade = 0.0588 * letter_sum - 0.296 * sentence_sum - 15.8;

    {
        printf("Grade %i", grade);
    }
}