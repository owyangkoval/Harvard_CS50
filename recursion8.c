#include <stdio.h>

int input(int a[], int n) {
    if (n>=0) {
    input(a,n-1);
    printf("Element - %d: ", n);
    scanf("%d", &a[n]);
    }
    return 1;
}

int highestelement(int a[], int n) {
int temp;
    if (n<n+1) {
        temp = a[n];
        a[n] = a[n+1];
        a[n+1] =temp;
    }
}

int main(void) {

int n;
printf("Input the number of elements to be stored in the array :");
scanf("%d", &n);
printf("\nInput %d elements in the array:",n);

int a[n];
input(a,n-1);
printf("\n\nThe highest element of the array is: ");
highestelement(n);

}