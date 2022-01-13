#include <cs50.h>
#include <stdio.h>

int main(void)

{

     long Number = get_long("Card Number: ");

     if
     // number of digits AMEX
     (Number == 15)
     {
          printf("AMEX\n");
     }

     else if
     // number of digits MASTERCARD
     (Number == 16)
     {
          printf("MASTERCARD\n");
     }
}