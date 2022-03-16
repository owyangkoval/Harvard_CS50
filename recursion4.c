#include<stdio.h>

int input(int a[],int n) {
    if(n>=0) {
    input(a,n-1);
    printf("\nelement - %d: ",n);
    scanf("%d", &a[n]);
    }
return 1;
}

int set(int a[],int n) {
    if(n>=0) {
    set(a,n-1);
    printf("%d ",a[n]);
    }
return 1;
}

int main(void)
{
int n;
printf("Input the number of elements to be stored in the array :");
scanf("%d", &n);
printf("\nInput %d elements in the array:",n);

int a[n];
input(a,n-1);
printf("\n\nThe elements in the array are: ");
set(a,n-1);
}