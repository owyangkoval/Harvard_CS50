#include <cs50.h>
#include <stdio.h>

int main(void)

{

     long Number = get_long("Card Number: ");

     if
     // number of digits AMEX
     (Number <= 16 && Number >= 14)
     
     {
          printf("AMEX\n");
     }
}