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
    while (fread(buffer, 1, 15, fp) == 15) {
        if (buffer[i]==l) {
        sprintf(,"%031", i);
    }


    //

    fclose(fp);
}