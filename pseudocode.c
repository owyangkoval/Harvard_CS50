

     for
     // number of digits MASTERCARD
     ( Number /= 16)
     printf("MASTERCARD\n");

     for
     // number of digits VISA
     ( Number /= 13 || Number /=16 )
     printf("VISA\n");


     for
     // number of digits INVALID
     printf("INVALID\n");

}