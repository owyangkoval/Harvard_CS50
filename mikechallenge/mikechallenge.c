#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *inputfp;
    FILE *outputfp;
    uint8_t buffer[512];
    char stringip[5] = "Trump";
    char stringop[5] = "Biden";

    // open 2016.txt
    inputfp = fopen("2016.txt", "r");
    if (inputfp == NULL)
    {
        printf("error\n");
        exit(1);
    }

    // read 2016.txt
    while (fread(buffer, 1, 20, intputfp) == 20) {
        
    }

}