#include<stdio.h>
#include<cs50.h>
#include<string.h>

int count_letters(string text);
int count_sentences(string text);

int main(void){


    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

}