#include <stdio.h>

int reversestring(char n) {
    if (n==0) {
        return 0;
        }
    else {
return reversestring(n=n%2);
    }
}

int main(void) {
int i;
char n;
int str[n];

printf(" Input any string: \n");
scanf("%c",&n);

//reversestring(n);
printf("The reversed string is: %d\n", str[n]);

}