#include<stdio.h>
#include<math.h>


int main(void) {

int i=0;
int j=0;
int sudoku[i][j];

for (i=0;i<6;i++) {
    for (j=0;j<6;j++) {
        scanf("%d", &sudoku[i][j]);
            printf("%d", sudoku[i][j]);
        }
    }
}