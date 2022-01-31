#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

string s = get_string("Plaintext: ");

int i = atoi(s);
int j;

    //Getting int values for a-z through ASCII
    for(i=0;i<=strlen(s);i++)
        {
        if(s[i]=='\0')
            {
                s[i]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' }
                printf("%c",s[i]);
            }
        //spaces stay the same
        if(s[i]==' ')
            {
                s[i]=s[i];
                printf("%c",s[i]);
            }
        else if(s[i] >= 'a' && s[i] <= 'z')
            {
                //Formula for cipher using key
                s[i]=(s[i]+2);
                printf("%c",s[i]);
            }
        else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                //Formula for cipher using key
                s[i]=(s[i]+2);
                printf("%c",s[i]);
            }
        }
    printf("\n");
}