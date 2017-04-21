/*************************************************************
**
**  Mason Jensen
**  10/18/2006
**
**  Extra credit homework assignment 1 (4 points):  Write a 
**  program that prints the following pattern separately one 
**  below the other. Use for loops to generate the patterns. 
**  All asterisks (*) should be printed by a single printf 
**  statements of the form printf("*");, printf(" "); and 
**  printf("\n"). (this causes the asterisks to print side 
**  by side.)
**
**   
**               *
**              **
**             ***
**            ****
**           *****
**          ******
**         *******
**        ********
**       *********
**      **********
**
**
**
**************************************************************/

#include <stdio.h>

void main(void)
{
   int i, j, k;

   for (i = 0; i < 10; ++i)
   {
      for (j = 10 - i; j > 0; --j)
      {
         printf(" ");
      }

      for (k = 0; k < i; ++k)
      {
         printf("*");
      }

      printf("\n");
   }


}
