#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)

{
     long Number = get_long("Card Number: ");
     int SecondDigit = (Number % 100/10);
     int FourthDigit = (Number % 100^2/10^3);
     int SixthDigit = (Number % 100^4/10^5);
     int EigthDigit = (Number % 100/10);
     int TenthDigit = (Number % 100/10);
     int Twelthigit = (Number % 100/10);
     int FourteenthDigit = (Number % 100/10);
     int SixteenthDigit = (Number % 100/10);
     int EighteenthDigit = (Number % 100/10);

     printf("FourthDigit: %i\n", FourthDigit);


}