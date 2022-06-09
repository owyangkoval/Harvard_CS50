#include <stdio.h>
#include <math.h>


int main(void) {

int i=0;
int j=0;
int rowcolval;
int sudoku[][];

//enter number for how many rows/columns needed
printf("Enter row/column value: ");
scanf("%d," rowcolval)

//loop for i j values;
for (i=0;i<rowcolval;i++) {
    for (j=0;j<rowcolval;j++) {
        scanf("%d", &sudoku[i][j]);
            printf("%d", sudoku[i][j]);
        }
    }
}