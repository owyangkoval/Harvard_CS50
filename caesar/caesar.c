#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

string s = get_string("Plaintext: ");

int i = atoi(s);
int j;

    for(i=0;i<=strlen(s);i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
            for(j=i;a[j]!='\0';j++)
                {
                //Formula for cipher using key
                s[i]=(s[i]+2);
                printf("%c",s[i]);
                }
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