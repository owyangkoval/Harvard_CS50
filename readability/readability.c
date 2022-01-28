#include<stdio.h>
#include<cs50.h>
#include<string.h>

int string_length(string s);
int count_letters(string text);

int main(void){

int i;
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}
}