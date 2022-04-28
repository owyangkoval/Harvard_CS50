#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *inputfp;
    int buffer[5] = {0x54, 0x72, 0x75, 0x6d, 0x70};
    int filename[5];
    int i=0;

    // open 2016.txt
    inputfp = fopen("2016.txt", "r");
    if (inputfp == NULL)
    {
        printf("error\n");
        exit(1);
    }

    // read 2016.txt
    while (fread(buffer, 1, 5, inputfp) == 5)
        {
            printf("%d", *buffer);
            i++;
//            sprintf(filename, "Biden");
//           outputfp = fopen("2020.txt", "w");
//            if (outputfp == NULL)
//            {
//                printf("error\n");
//                exit(1);
//            }
//            fwrite(&buffer, 1, 512, outputfp);
        }
}