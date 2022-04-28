#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *inputfp;
    char *buffer[100];
    char filename[5];
    int i=0;

    // open 2016.txt
    inputfp = fopen("2016.txt", "r");
    if (inputfp == NULL)
    {
        printf("error\n");
        exit(1);
    }

    // read 2016.txt
    while (fread(buffer, 5, 100, inputfp) == 100)
    {
        if (buffer[i] == 0x54 && buffer[i + 1] == 0x72 && buffer[i + 2] == "u" && buffer[i + 3] == "m" && buffer[i + 4] == "p")
        {
            printf("%s", inputfp);
            i++;
            sprintf(filename, "%c%c%c%c%c", );
           outputfp = fopen("2020.txt", "w");
            if (outputfp == NULL)
            {
                printf("error\n");
                exit(1);
            }
            fwrite(&buffer, 1, 512, outputfp);
        }
    }
}
}