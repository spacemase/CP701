/*************************************************************
**
**  Mason Jensen
**  10/25/2006
**
**  Write a function integerPower(base, exponent) that returns 
**  the value of base**exponent. For example, 
**      integerPower(3, 4) = 3 * 3 * 3 * 3 
**  Assume that exponent is a positive, nonzero integer, and 
**  base is an integer.  The function integerPower should use 
**  a for loop to control the calculation.  Do not use any 
**  math library functions.  
**
**
**
**************************************************************/

#include <stdio.h>

long int_power(int, int);

void main(void)
{
   int int1, int2;

   printf("Please enter the base, then exponent you would like to calculate:  ");
   scanf("%d%d", &int1, &int2);

   printf("%d raised to the %d power equals %ld\n", int1, int2, int_power(int1, int2));
}



long int_power(int base, int exponent)
{
   int i;
   long result = 1;

   for (i = 0; i < exponent; ++i)
      result *= base;

   return result;
}
