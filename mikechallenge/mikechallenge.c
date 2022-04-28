#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *inputfp;
    FILE *outputfp;
    uint8_t buffer[20];
    int replacementname[20];
    int i = 0;

    // open 2016.txt
    inputfp = fopen("2016.txt", "r");
    if (inputfp == NULL)
    {
        printf("error\n");
        exit(1);
    }

    // read 2016.txt
    while (fread(buffer, 1, 20, inputfp) == 20)
    {
        if (buffer[i] = {0x54, 0x72, 0x75, 0x6d, 0x70}) {
        printf("%d", buffer[i]);
        i++;
        }

        //            sprintf(replacementname, "Biden");
        //           outputfp = fopen("2020.txt", "w");
        //            if (outputfp == NULL)
        //            {
        //                printf("error\n");
        //                exit(1);
        //            }
        //            fwrite(&buffer, 1, 512, outputfp);
}