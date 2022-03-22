#include<stdio.h>

int main() {
    char string[],*revstr;

    printf(" Input any string: ");
    scanf("%s",string);

    revstr = ReverseOfString(string);//call the function ReverseOfString

    printf(" The reversed string is: %s\n\n",revstring);
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