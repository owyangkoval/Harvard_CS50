#include<stdio.h>
#include<cs50.h>
#include<string.h>

int string_length(string s);
int count_letters(string text);

int main(void){

int i;
{
    string name = get_string("Name: ");

    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);
}