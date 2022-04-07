#include<stdio.h>

int evennum(int i, int j) {
int even;
    if (i==j)
    return 1;
    else {
        even = evennum(i+1, j);
    }
    return even;
}

int oddnum(int i, int j) {
    if (i==j)
    return 1;
    else {
        return oddnum(i+2, j);
    }
}

int main(void) {

int i=0;
int j=0;

    printf("Input the range to print starting from ");
    scanf("%d",&i);
    printf(":");
    scanf("%d",&j);


    printf("All even numbers from %d to %d are: ", i,j);
    int e = evennum(i,j);
    printf("%d\n", e);

    printf("All odd numbers from %d to %d are: ", i,j);
    int o = oddnum(i,j);
    printf("%d\n", o);

}