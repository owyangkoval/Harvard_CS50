#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *inputfp;
    FILE *outputfp;
    int buffer[20];
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
        if ()
        printf("%d", *buffer);
        i++;
        //            sprintf(replacementname, "Biden");
        //           outputfp = fopen("2020.txt", "w");
        //            if (outputfp == NULL)
        //            {
        //                printf("error\n");
        //                exit(1);
        //            }
        //            fwrite(&buffer, 1, 512, outputfp);
    }
}