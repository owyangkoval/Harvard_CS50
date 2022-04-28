#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *inputfp;
    FILE *outputfp;
    char str[5] = 'Trump';

    // open 2016.txt
    inputfp = fopen("2016.txt", "r");
    if (inputfp == NULL)
    {
        printf("error\n");
        exit(1);
    }

    // read 2016.txt
    for(i=0;i ;i++)

        //            sprintf(replacementname, "Biden");
        //           outputfp = fopen("2020.txt", "w");
        //            if (outputfp == NULL)
        //            {
        //                printf("error\n");
        //                exit(1);
        //            }
        //            fwrite(&buffer, 1, 512, outputfp);
}