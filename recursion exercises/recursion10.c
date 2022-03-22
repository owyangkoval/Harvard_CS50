#include <stdio.h>

int factorial(int n) {
int x=0;
    if (n==1) {
        return n;
    }
    else {
        x = n * factorial(n-1);
    }
    return x;
}

int main(void) {
int n = 0, nfactorial;
    printf("Input a number: ");
    scanf("%d", &n);

    nfactorial = factorial(n);
    printf("The Factorial of %d is: %d\n", n, nfactorial);
}