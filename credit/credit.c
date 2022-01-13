#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void);

     long num;
     
     do
    {
     num = get_long("Card Number: ");
    }
     if
    (num < 17 && num >12);


     {
                int dig2 = ((num % 100)/10)*2;
                int dig4 = ((num % 10000)/1000)*2;
                int dig6 = ((num % 1000000)/100000)*2;
                int dig8 = ((num % 100000000)/1000000)*2;
                int dig10 = ((num % 10000000000)/100000000)*2;
                int dig12 = ((num % 1000000000000)/10000000000)*2;
                int dig14 = ((num % 100000000000000)/1000000000000)*2;
                int dig16 = ((num  % 10000000000000000)/100000000000000)*2;

                int dig2_1 = ((dig2 % 10) + (dig2 % 100)/10);
                int dig4_1 = ((dig4 % 10) + (dig4 % 100)/10);
                int dig6_1  = ((dig6 % 10) + (dig6 % 100)/10);
                int dig8_1  = ((dig8 % 10) + (dig8 % 100)/10);
                int dig10_1  = ((dig10 % 10) + (dig10 % 100)/10);
                int dig12_1  = ((dig12 % 10) + (dig12 % 100)/10);
                int dig14_1  = ((dig14 % 10) + (dig14 % 100)/10);
                int dig16_1 = ((dig16 % 10) + (dig16 % 100)/10);

                int dig1 = (num % 10);
                int dig3 = (num % 1000)
                int dig5 = (num % 100000)
                int dig7 = (num % 10000000)
                int dig9 = (num % 1000000000);
                int dig11 = (num % 100000000000);
                int dig13 = (num % 10000000000000);
                int dig15 = (num % 1000000000000000);


    int sumeven = dig2_1 + dig4_1 + dig6_1+ dig8_1 + dig10_1 + dig12_1 + dig14_1 + dig16_1;
    int sumodd = dig1 + dig3 + dig5 + dig7 + dig9 + dig11 + dig13 + dig15;

    int finalsum = sumeven + sumodd
}



     // AMEX
     if (num < 16 && num > 14)
          {
               dig15 == 3, dig14 == 4;
          }
     else {
               dig15 == 3, dig14 == 7;
          }
     {
          printf("AMEX\n");
     }

     //MASTERCARD
     if (num < 17 && num > 15)
          {
               dig16 == 5, dig14 <= 5 || dig14 >= 1;
          }
     {
          printf("MASTERCARD\n");
     }

     //VISA
     if (num == 13 && num == 16)
          {
               dig16 == 4 || dig13 == 4;
          }
     {
          printf("VISA\n");
     }

     //INVALID
     {
          printf("INVALID\n");
     }


}