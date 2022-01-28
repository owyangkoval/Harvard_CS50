#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

int i, k=0;
scanf("%i",argv[2])

    char p[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char c[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    string plain = get_string("Plaintext: ");
    scanf("%s\n", plain);

    //Upper Case Alphabet
    for(i=65;i<=90;i++){
        c[i]=(p[i]+k);
        printf("%c\n",c[i]);
    }

    //Lower Case Alphabet
    for(i=97;i<=122;i++){
        c[i]=(p[i]+k);
        printf("%c\n",c[i]);
    }


}