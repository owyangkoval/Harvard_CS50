#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

string s = get_string("Plaintext: ");

int isspace(int argument);


int i = atoi(s);

    //Getting int values for a-z through ASCII
    for(i=0;i<=strlen(s);i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] ==' '){
        //Formula for cipher using key
        s[i]=(s[i]+1);
        printf("%c",s[i]);
        int isspace(int argument);
        }
    }
        printf("\n");

}