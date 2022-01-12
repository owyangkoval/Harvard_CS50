#include <cs50.h>
#include <stdio.h>

int main(void)

{

     long Number = get_long("Card Number: ");

     if
     {
     // number of digits AMEX
     ( Number /= 15)
     printf("AMEX\n");


     else
     {
     // number of digits MASTERCARD
     ( Number /= 16);
     printf("MASTERCARD\n");
     }

     else
     {
     // number of digits VISA
     ( Number /= 13 || Number /=16 )
     printf("VISA\n");
     }

     else
     // number of digits INVALID
     printf("INVALID\n");

}