#include<stdio.h>
#define MAX 100

int main() {
    char string[MAX],*revstring;

    printf(" Input any string: ");
    scanf("%s",string);

    revstring = ReverseOfString(string);

    printf(" The reversed string is: %s\n",revstring);
    return 0;
}

char* ReverseOfString(char string[])
{
    static int i=0;
    static char revstring[MAX];
    if(*string)
    {
         ReverseOfString(string+1);//calling the function ReverseOfString itself
         revstring[i++] = *string;
    }
    return revstring;
}