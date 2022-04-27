#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *inputfp;
    FILE *outputfp = NULL;
    uint8_t buffer[512];
    char filename[8];
    int i = 0;

    // open file card.raw
    printf("opening input file %s\n", argv[1]);
    inputfp = fopen(argv[1], "r");
    if (inputfp == NULL)
    {
        printf("error\n");
        exit(1);
    }

    // read data
    printf("entering read block\n");
    while (fread(buffer, 1, 512, inputfp) == 512)
    {
        printf("read block\n");
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // if first image
            if (i == 0)
            {
                sprintf(filename, "%03i.jpg", i);
                printf("opening first file %s\n", filename);
                i++;
                outputfp = fopen(filename, "w");
                if (outputfp == NULL)
                {
                    printf("error\n");
                    exit(1);
                }
                fwrite(&buffer, 1, 512, outputfp);
            }
            // else close file and open new one
            else
            {
                fclose(outputfp);
                sprintf(filename, "%03i.jpg", i);
                i++;
                printf("closing previous file, opening next file %s\n", filename);
                outputfp = fopen(filename,"w");
                if (outputfp == NULL)
                {
                    printf("error\n");
                    exit(1);
                }
                fwrite(&buffer, 1, 512, outputfp);
            }
        }
        else
        {
            // continue writing to file
            if (outputfp != NULL) {
                printf("writing block to open file\n");
                fwrite(&buffer, 1, 512, outputfp);
            } else {
                printf("skipping block\n");
            }
        }
    }
    // close file
    fclose(inputfp);
    return (0);
}
