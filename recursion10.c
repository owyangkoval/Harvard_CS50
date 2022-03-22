#include <stdio.h>

int factorial(int n) {

    if (n==0) {
        return 0;
    }
    else {
        x = n * factorial(n-1);
    }
    return n;
}

int main(void) {
int n = 0, nfactorial;
    printf("Input a number: ");
    scanf("%d", &n);

    nfactorial = factorial(n);
    printf("The Factorial of %d is: %d\n", n, nfactorial);
}