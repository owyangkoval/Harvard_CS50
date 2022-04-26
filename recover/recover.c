#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    uint8_t buffer[512];

    //open file card.raw
    fp = fopen(argv[1], "r");
        if (fp == NULL) {
            printf("error");
            exit(1);
        }

    //read data
    while (fread(buffer, 1, 8, fp) == 8) {
        //if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0)==0) {

        if (buffer[0] == 0x6c & buffer[1] == 0x69) {
            int i=0;
            printf("%s\n",buffer);
            sprintf(fp, "%03i", i, buffer);
            //fwrite(buffer, 1, 8, fp);
            }
    }
}