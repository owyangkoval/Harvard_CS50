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


//string
string s = get_string("Plaintext: ");

//ints
int key = atoi(argv[1]);
int i = atoi(s);
int j;

//integer for array
    for(i=0;i<=strlen(s);i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                {
                //Formula for cipher using key
                s[i]=(s[i]+key);
                printf("%c",s[i]);
                }
        else if(s[i]==' ')
                {
                //spaces stay the same
                s[i]=s[i];
                printf("%c",s[i]);
                }
            }
        printf("\n");
        return 0;
}