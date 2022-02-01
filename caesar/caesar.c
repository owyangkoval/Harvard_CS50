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
            printf("Usage: ./caesar key\n");
            return 1;
        }
    else if(argc < 2)
        {
            printf("Usage: ./caesar key\n");
            return 0;
        }

//variables
string s = get_string("Plaintext: ");
int key = atoi(argv[1]);
int i = atoi(s);
int c;

//integer for array
    for(i=0;i<=strlen(s);i++){
        if(s[i] >= 'a' && s[i] <= 'z')
                {
                //Uppercase Formula for cipher using key
                c=(s[i]+ key);
                printf("%c",c);
                }
        else if (s[i] >= 'A' && s[i] <= 'Z')
                {
                //Lowercase Formula for cipher using key
                c=(s[i]+ key);
                printf("%c",c);
                }
        else if((s[i] >= '{' && s[i] <= "@") || (s[i] >= '[' && s[i] <= '`') || (s[i]==' '))
                {
                //special characters stay the same
                s[i]=s[i];
                printf("%c",s[i]);
                }
            }
        printf("\n");
        return 0;
}