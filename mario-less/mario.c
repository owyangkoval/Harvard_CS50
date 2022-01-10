#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    //rows
    for (int i=1; i<=rows; n=0){
      for(j=1; j<=rows-i; ++j){
        printf(" ");
    }
      }
      while (n!=2*i-1) {
         printf("# ");
         ++n;
      }
      printf("\n");
