#include <stdio.h>

int input(int a[],int n) {
    if (n>=0) {
    input(a,n-1);
    printf("Element - %d: ", n);
    scanf("%d", &a[n]);
    }
    return 1;
}

int max(int a[],int n) {
static int i = a[n];
    if(n<0) {
        return 0;
        }
    if(a[n]>i) {
        i=a[n];
        max(a,n-1);
        return i;
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
max(a,n-1);

}