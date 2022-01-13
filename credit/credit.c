#include <cs50.h>
#include <stdio.h>

int main(void)

{
     long Number = get_long("Card Number: ");
     int SecondDigit = (Number % 100/10);
     int FourthDigit = (Number % 100/10);



     printf("SecondDigit: %i\n", SecondDigit);


}