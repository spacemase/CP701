/*************************************************************
**
**  Mason Jensen
**  10/25/2006
**
**  Chapter 9, Programming Exercise 4.  The harmonic mean of 
**  two numbers is obtained by taking the inverses of the two 
**  numbers, averaging them, and taking the inverse of the 
**  result.  Write a function that takes two double arguments 
**  and returns the harmonic mean of the two numbers.  
**
**
**
**************************************************************/

#include <stdio.h>


double h_mean(double, double);

void main(void)
{
   double input1 = 0;     /* initialized to insure */
   double input2 = 0;     /* first iteration of while */

   while ((input1 == 0) || (input2 == 0))
   {
      printf("Please enter two non-zero numbers:  ");
      scanf("%lf%lf", &input1, &input2);
   }

   printf("The harmonic mean of your numbers is:  %lf\n", h_mean(input1, input2));
}



double h_mean(double d1, double d2)
{
   return (1/((1/d1+1/d2)/2));
}
