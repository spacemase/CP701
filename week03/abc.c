/*************************************************************
**
**  Mason Jensen
**  10/18/2006
**
**  Chapter 6, Programming Exercise 3.  Use nested loops to 
**  produce the following pattern:  
**
**    F
**    FE
**    FED
**    FEDC
**    FEDCB
**    FEDCBA
**
**
**
**************************************************************/

#include <stdio.h>

void main(void)
{
   int i, j;
   char c;

   printf("\n");
   for (i = 0; i < 6; ++i)
   {
      printf("\t");
      for (j = 0; j <= i; ++j)
      {
         c = 'F' - j;
         printf("%c", c);
      }
      printf("\n");
   }

}
