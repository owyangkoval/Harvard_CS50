#include <stdio.h>

int binary(int n) {
int x=0;
    if (n!=0) {
    x = binary(n%2);
    }
    return x;
}



int main (void) {
int n=0;

    printf("Input any decimal number : ");
    scanf("%d",&n);

    int binaryme=binary(n);
    printf("The Binary value of decimal no. %d is : %d\n", n, binaryme);
}