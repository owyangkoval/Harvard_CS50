#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
     long int num

     num = get_long("Card Number: ");

     dig2 = ((num % 100)/10);
     dig4 = ((num % 10000)/1000);
     dig6 = ((num % 1000000)/100000);
     dig8 = ((num % 100000000)/10000000);
     dig10 = ((num % 10000000000)/1000000000);
     dig12 = ((num % 1000000000000)/100000000000);
     dig14 = ((num % 100000000000000)/10000000000000);
     dig16 = ((num % 10000000000000000)/1000000000000000);

     dig2x2 = (dig2 * 2);
     dig4x2 = (dig4 * 2);
     dig6x2 = (dig6 * 2);
     dig8x2 = (dig8 * 2);
     dig10x2 = (dig10 * 2);
     dig12x2 = (dig12 * 2);
     dig14x2 = (dig14 * 2);
     dig16x2 = (dig16 * 2);

     dig2_1 = ((dig2 % 10) + (dig2 % 100)/10);
     dig4_1 = ((dig4 % 10) + (dig4 % 100)/10);
     dig6_1  = ((dig6 % 10) + (dig6 % 100)/10);
     dig8_1  = ((dig8 % 10) + (dig8 % 100)/10);
     dig10_1  = ((dig10 % 10) + (dig10 % 100)/10);
     dig12_1  = ((dig12 % 10) + (dig12 % 100)/10);
     dig14_1  = ((dig14 % 10) + (dig14 % 100)/10);
     dig16_1 = ((dig16 % 10) + (dig16 % 100)/10);

     dig1 = (num % 10);
     dig3 = ((num % 1000)/100);
     dig5 = ((num % 100000)/10000);
     dig7 = ((num % 10000000)/1000000);
     dig9 = ((num % 1000000000)/100000000);
     dig11 = ((num % 100000000000)/10000000000);
     dig13 = ((num % 10000000000000)/1000000000000);
     dig15 = ((num % 1000000000000000)/100000000000000);

    sumeven = dig2_1 + dig4_1 + dig6_1+ dig8_1 + dig10_1 + dig12_1 + dig14_1 + dig16_1;
    sumodd = dig1 + dig3 + dig5 + dig7 + dig9 + dig11 + dig13 + dig15;

          // Last Digit of Sum
          finalsum = sumeven + sumodd;
          lastdigit = (finalsum % 10);

          printf("lastdigit: %li\n", lastdigit);

          // Number of Digits
          while(num)
               {
               num=num/10;
               count++;
               }
          printf("Number of Digits in Card number: %ld\n", count);


     //VISA
          if ((dig16 == 4 && dig13 == 4) || (dig16 == 4))
               {
               printf("VISA\n");
               }


     //MASTERCARD
               else if (dig16 == 5 && (dig14 == 5 || dig14 == 1) && (lastdigit == 0))
               {
               printf("MASTERCARD\n");
               }

     //AMEX
               else if (dig15 == 3 && (dig14 == 4 || dig14 == 7) && lastdigit == 0)
                    {
                    printf("AMEX\n");
                    }

     //INVALID
          else
               {
               printf("INVALID\n");
               }

}
