#include <stdio.h>

int reversestring(int n) {

    if (n==0) {
        return 0;
        }
    else {
return reversestring(n=n%2);
    }
}

int main(void) {
int i, n=0, str[n];

printf(" Input any string: \n");
scanf("%d",&n);

//reversestring(n);
printf("The reversed string is: %d\n", n);

}