#include <stdio.h>
int a=0,b=0;
int gcd(int p)
{
if(a%p==0 && b%p==0)
return p;
return gcd(--p);
}
int main(void){
scanf("%d%d", &a, &b);
printf("The GCD of %d and %d is:%d",a,b,gcd(fmin(a,b)));
return 0;
}