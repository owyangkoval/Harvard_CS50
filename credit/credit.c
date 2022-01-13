#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
     long num = get_long("Card Number: ");
}
{
    do(num < 16 && num > 12)

     while
     {
                int dig2 = ((num % 100)/10)*2;
                int dig4 = ((num % 10000)/1000)*2;
                int dig6 = ((num % 1000000)/100000)*2;
                int dig8 = ((num % 100000000)/1000000)*2;
                int dig10 = ((num % 10000000000)/100000000)*2;
                int dig12 = ((num % 1000000000000)/10000000000)*2;
                int dig14 = ((num % 100000000000000)/1000000000000)*2;
                int dig16 = ((num % 10000000000000000)/100000000000000)*2;

                dig2_1 = ((dig2 % 10) + (dig2 % 100)/10);
                dig4_1 = ((dig4 % 10) + (dig4 % 100)/10);
                dig6_1  = ((dig6 % 10) + (dig6 % 100)/10);
                dig8_1  = ((dig8 % 10) + (dig8 % 100)/10);
                dig10_1  = ((dig10 % 10) + (dig10 % 100)/10);
                dig12_1  = ((dig12 % 10) + (dig12 % 100)/10);
                dig14_1  = ((dig14 % 10) + (dig14 % 100)/10);
                dig16_1 = ((dig16 % 10) + (dig16 % 100)/10);

    int sumeven = dig2_1 + dig4_1 + dig6_1+ dig8_1 + dig10_1 + dig12_1 + dig14_1 + dig16_1;
    int sumodd = dig1 + dig3 + dig5 + dig7 + dig9 + dig11 + dig13 + dig15;

    finalsum = sumeven + sumodd
     }
}
{
    printf("final sum: %i\n," finalsum)
}