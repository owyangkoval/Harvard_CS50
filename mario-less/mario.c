#include <stdio.h>

int main(void)
{
    int n;
do
{
    n = get_int("Height: ");
}
while (n < 1 || n > 8);
{
    int row,col,space,n1=4, n2=4;

    for(row=1;row<=n1;row++){

    for(space=n2-row;space>=0;space--)
        printf(" ");

    for(col=1;col<=row;col++)
        printf("*");

    printf("##");

    for(col=1;col<=row;col++)
        printf("*");

    for(space=n2-row;space>=0;space--)
        printf(" ");

    }

    printf("\n");
}