#include <cs50.h>
#include <stdio.h>

int main(void) {
    //initialize variables
    int height, n, j, k, i;

    printf("Height: \n");
    // Get user input
    height = Get_Int();
    n = height;
    for(i = 0; i < height; i++) {
        // create n spaces based off height
        for(k = n; k > i; k--)
            printf("%c", ' ');

        // create hash tags
        for(j = 0; j < i+2; j++)
            printf("#");

        printf("\n");
    }
    return 0;
}