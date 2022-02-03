#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[2]){

//argc count verification
    if(argc == 2)
        {
        }
    if(argc > 2)
        {
            printf("./substitution key\n");
            return 1;
        }
    else if(argc < 2)
        {
            printf("Usage: ./substitution key\n");
            return 0;
        }

//argv count verification
    if(strlen(argv[1]) == 26)
        {
        }
    else if(strlen(argv[1]) < 26 || strlen(argv[1]) > 26)
        {
            printf("Key must contain 26 characters.\n");
            return 0;
        }

//variables
string s = get_string("Plaintext: ");
int i;
char c;
char* key = (argv[1]);


//integer for strings
    for(i=0;i<=strlen(s);i++){
            if (s[i] >= 'a' && s[i] <= 'z')
                {
                //Lowercase Formula for cipher using key?????
                int offset=s[i]-'a';
                c=key[offset];
                printf("%i", c);
                }
            if (s[i] >= 'a' && s[i] <= 'z')
                {
                //Lowercase Formula for cipher using key?????
                int offset=s[i]-'a';
                printf("%c", offset);
                }
        else if((s[i] >= '{') || (s[i] <= '@') || (s[i] >= '[') || (s[i] <= '`') || (s[i]==' '))
                {
                //special characters and spaces stay the same
                s[i]=s[i];
                printf("%c",s[i]);
                }
            }
        printf("\n");
        return 0;
}