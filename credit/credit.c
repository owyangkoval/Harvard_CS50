#include <cs50.h>
#include <stdio.h>

int main(void)

{
     long Number = get_long("Card Number: ");
     int Digit = (Number % 100/10);
     printf("Digit: %i\n", Digit);


}