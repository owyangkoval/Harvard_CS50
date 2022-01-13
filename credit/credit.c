#include <cs50.h>
#include <stdio.h>

int main(void)

{

     long Number = get_long("Card Number: ");

     if
     // number of digits AMEX
     (Number >= 14 && Number <=16)
     {
          printf("AMEX\n");
     }

     else if
     // number of digits MASTERCARD
     (Number >= 15 && Number <=17)
     {
          printf("MASTERCARD\n");
     }

     else
     {
          printf("INVALID\n");
     }
}