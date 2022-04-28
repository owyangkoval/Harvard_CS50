#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

FILE *inputfp;
char *buffer[20];

       //open 2016.txt
       inputfp = fopen("2016.txt","r");
        if (inputfp == NULL) {
            printf("error\n");
            exit(1);
        }

        //read 2016.txt
        while (fread(buffer, 5, 20, inputfp)==20){
            printf("%s");
        }
}