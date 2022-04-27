#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *inputfp;
    FILE *outputfp;
    uint8_t buffer[512];
    char filename[8];

    //open file card.raw
    inputfp = fopen(argv[1], "w+");
        if (inputfp == NULL) {
            printf("error");
            exit(1);
        }

    //read data
    while (fread(buffer, 1, 512, inputfp) == 512) {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0)==0) {
                //if first image
                if (int i=0)
                {
                sprintf(filename, "%03i.jpg", i)
                i++;
                fwrite(&buffer, 1, 512, outputfp);
                //else close file and open new one
                    else
                    {
                    fclose(outputfp);
                    }
                }
            }
        else
            {
            //continue writing to file
            fwrite(&buffer, 1, 512, fp);
            }
        }
    //close file
    fclose(fp);
}