

}

     //MASTERCARD
     else if(4003600000000014)
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
