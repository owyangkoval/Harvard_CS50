#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int main(void){
int l;
int count_letters(string text);
int count_sentences(string text);

    //prompt user for text
    string s = get_string("Text: ");
    printf("Output: \n");
    for (int i = 0; i < strlen(s); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            printf("%i", i);
        }
    }
}