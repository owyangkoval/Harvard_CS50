#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

    string plaintext = get_string("Plaintext: ");
    int key = get_int("Key: ");

    int i, p, c;
    char k[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D',
    'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

        for (i=0;i<strlen(plaintext);i++)
    {
        printf("%c",k[i]);
    }


}
