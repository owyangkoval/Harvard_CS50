#include <stdio.h>

int input(int a[], int n) {
    if (n>=0) {
    input(a,n-1);
    printf("Element - %d: ", n);
    scanf("%d", &a[n]);
    }
    return 1;
}

int highestelem(int n) {
int a=0; int max=0;
    if (n<n+1) {
        highestelem(n);
        max = a[n];
        a[n] = a[n+1];
        a[n+1] = max;
    }
    return max;
}

int main(void) {

int n;
printf("Input the number of elements to be stored in the array :");
scanf("%d", &n);
printf("\nInput %d elements in the array:",n);

int a[n];
input(a,n-1);
printf("\n\nThe highest element of the array is: ");
highestelem(n);

}