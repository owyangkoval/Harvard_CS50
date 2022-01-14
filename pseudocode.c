
     //MASTERCARD
     else if(num == 16 && dig16 == 5 && (dig14 == 5 || dig14 == 1) && (lastdigit == 0))
     {
          printf("MASTERCARD\n");
     }

     // AMEX
     if (dig15 == 3 && (dig14 == 4 || dig14 == 7) && lastdigit == 0)
     {
          printf("AMEX\n");
     }

     //VISA
     else if ((dig13 == 4 && lastdigit == 0) || (dig14 == 4 && lastdigit == 0))
     {
          printf("VISA\n");
     }

     //INVALID
     else
     {
          printf("INVALID\n");
     }

}

     //MASTERCARD
     else if(num == 16 && dig16 == 5 && (dig14 == 5 || dig14 == 1) && (lastdigit == 0))
     {
          printf("MASTERCARD\n");
     }

     // AMEX
     if (dig15 == 3 && (dig14 == 4 || dig14 == 7) && lastdigit == 0)
     {
          printf("AMEX\n");
     }

     //VISA
     else if ((dig13 == 4 && lastdigit == 0) || (dig14 == 4 && lastdigit == 0))
     {
          printf("VISA\n");
     }

     //INVALID
     else
     {
          printf("INVALID\n");
     }

}
