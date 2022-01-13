#include <cs50.h>
#include <stdio.h>

int main(void)

{

     long number = get_long("Card Number: ");

     if
     // number of digits AMEX
     ( number > 14, number < 16 )

          printf("AMEX\n");

}