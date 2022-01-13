#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

     {
     long number = get_long("Card Number: ");
     }
                int dig2 = ((number % 100)/10)*2;
                int dig4 = ((number % 10000)/1000)*2;
                int dig6 = ((number % 1000000)/100000)*2;
                int dig8 = ((number % 100000000)/1000000)*2;
                int dig10 = ((number % 10000000000)/100000000)*2;
                int dig12 = ((number % 1000000000000)/10000000000)*2;
                int dig14 = ((number % 100000000000000)/1000000000000)*2;
                int dig16 = ((number  % 10000000000000000)/100000000000000)*2;

                int dig2_1 = ((dig2 % 10) + (dig2 % 100)/10);
                int dig4_1 = ((dig4 % 10) + (dig4 % 100)/10);
                int dig6_1  = ((dig6 % 10) + (dig6 % 100)/10);
                int dig8_1  = ((dig8 % 10) + (dig8 % 100)/10);
                int dig10_1  = ((dig10 % 10) + (dig10 % 100)/10);
                int dig12_1  = ((dig12 % 10) + (dig12 % 100)/10);
                int dig14_1  = ((dig14 % 10) + (dig14 % 100)/10);
                int dig16_1 = ((dig16 % 10) + (dig16 % 100)/10);

                int dig1 = (number % 10);
                int dig3 = (number % 1000)
                int dig5 = (number % 100000)
                int dig7 = (number % 10000000)
                int dig9 = (number % 1000000000);
                int dig11 = (number % 100000000000);
                int dig13 = (number % 10000000000000);
                int dig15 = (number % 1000000000000000);


    int sumeven = dig2_1 + dig4_1 + dig6_1+ dig8_1 + dig10_1 + dig12_1 + dig14_1 + dig16_1;
    int sumodd = dig1 + dig3 + dig5 + dig7 + dig9 + dig11 + dig13 + dig15;

    int finalsum = sumeven + sumodd
}

     while (long < 16 || long > 14)
          {
               dig15 == 3, dig14 ==4, dig14 ==
          }


}
{

}