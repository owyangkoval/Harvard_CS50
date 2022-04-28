#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

FILE *inputfp;
char *buffer[100];

       //open 2016.txt
       inputfp = fopen("2016.txt","r");
        if (inputfp == NULL) {
            printf("error\n");
            exit(1);
        }

        //read 2016.txt
        while (fread(buffer, 5, 100, inputfp) == 100){
            if (buffer[i] == "T" && buffer[i+1] == "r" && buffer [i+2] == "u" && buffer [i+3] == "m" && buffer [i+4] == "p")
            
        }
}