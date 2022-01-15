#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
     long int num, odd_num, even_num;

     num = get_long("Card Number: ");

     while(num = 0, num < 17, num++)
          {
               odd_num (num % 10)/10
               odd_num++
          }


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
