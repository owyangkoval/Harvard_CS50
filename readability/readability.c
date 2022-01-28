#include<stdio.h>
#include<cs50.h>
#include<string.h>

int count_letters(string text);
int count_sentences(string text);

int l;
int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: \n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        l=
        printf("%i\n", s[i]);
    }
}