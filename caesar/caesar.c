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
        else if((s[i] <= '@' && s[i] >='{') || (s[i] <= '`' && s[i] >= '['))
            {
                i++;
            }
        }
    printf("\n");
}