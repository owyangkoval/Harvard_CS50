#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *inputfp;
    int buffer[5];
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
        if (buffer[i] == 0x54 && buffer[i + 1] == 0x72 && buffer[i + 2] == 0x75 && buffer[i + 3] == 0x6d && buffer[i + 4] == 70)
        {
            printf("%c", buffer[i]);
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
}