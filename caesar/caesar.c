#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]){

string s = get_string("Plaintext: ");

int i = atoi(s);
string c=0;

    //Getting int values for a-z through ASCII
    for(i=0;i<=strlen(s);i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
        //Formula for cipher
        s[i]=(s[i]+1);
        printf("%d\n",s[i]);
        }
    }


}