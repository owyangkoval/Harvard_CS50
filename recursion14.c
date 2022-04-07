#include<stdio.h>

int evennum(int i, int j) {
    if (i==j)
    return 1;
    else {
        return evennnum(i+1, j);
    }
}

int oddnum(int i, int j) {
    if (i==j)
    return 1;
    else {
        return oddnum(i+2, j);
    }
}

int main(void)

int i, int j;

    printf("Input the range to print starting from %d: %d", i,j);


    scanf("All even numbers from %d to %d are: ", &i,&j);
    int e = evennum(i,j);
    printf("%d", e);

    scanf("All odd numbers from %d to %d are: ", &i,&j);
    int o = oddnum(i,j);
    printf("%d", o);