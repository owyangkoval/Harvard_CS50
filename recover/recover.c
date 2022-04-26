#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    FILE *file = fopen("card.raw", "r");

    uint8_t buffer[512];
    while (fread(buffer, 1, 512, file) == 512)
        {


        }

}