#include<stdio.h>
#include<cs50.h>
#include<string.h>

int count_letters(string text);
int count_sentences(string text);

int main(void){

char l[52] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string name = get_string("Text: ");

int count_letters(string text);
{
    int i = 0;
    while (l[i] != '\0')
    {
        i++;
    }
    return i;
}
}