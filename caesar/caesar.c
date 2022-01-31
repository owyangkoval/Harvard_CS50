#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

string s = get_string("Plaintext: ");

int i, j;

    for(i=0;i<=strlen(s);i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i]=='\0'))
            {
            for(j=i;s[j]!='\0';j++)
                {
                s[j]=s[j]+1;
                }
                //Formula for cipher using key
                s[i]=(s[i]+2);
                printf("%c",s[i]);
            }
        if(s[i]==' ')
            {
                //spaces stay the same
                s[i]=s[i];
                printf("%c",s[i]);
            }
    }
        printf("\n");
}