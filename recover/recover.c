#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    uint8_t buffer[512];

    //open file card.raw
    fp = fopen("card.raw", "r");
        if (fp == NULL) {
            printf("error");
            exit(1);
        }

    //read data
    while (fread(buffer, 1, 512, fp) == 512) {
        
    }


    //

    fclose(fp);
}