#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

  
int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string: %d", i);
    return 0;
}