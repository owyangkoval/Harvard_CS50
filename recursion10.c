#include <stdio.h>

int factorial(int n) {

    if (n==0) {
        return 0;
    }
    else {
        factorial(n-1);
    }
    return 1;
}

int main(void) {
int n = 0, nfactorial;
    printf("Input a number: ");
    scanf("%d", &n);

    nfactorial = factorial(n);
    printf("The Factorial of %d is: %d\n", n, nfactorial);
}