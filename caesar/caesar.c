#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[2]){

    int i;
    string cipher;

    int plain[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D',
    'E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

        for (i=0;i<argc;i++)
            {
            cipher=(plain[i]+argc)%26;
            }
            printf("%s\n",cipher);

    printf("\n");

}
