#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    uint8_t buffer[512];
    int i=0;
    char l=0;

    //open file card.raw
    fp = fopen(argv[1], "r");
        if (fp == NULL) {
            printf("error");
            exit(1);
        }

    //read data
    while (fread(buffer, 1, 8, fp) == 8) {
        if (buffer[1] == 0x) {
        printf("%s\n", buffer);
        }
    }
    fclose(fp);
}