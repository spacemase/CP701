/*************************************************************
**
**  Mason Jensen
**  10/18/2006
**
**  Chapter 6, Programming Exercise 5. Write a program that 
**  prints a table with each line giving an integer, its 
**  square, and its cube, Ask the user to input the lower 
**  and upper limits for the table. Use a for loop.
**
**
**
**************************************************************/

#include <stdio.h>

#define CUBE_EXCEEDS_INT_MAX 1291

void main(void)
{
   int i, lower, upper;

   printf("\nPlease enter the lower bound for the table:  ");
   scanf("%d", &lower);
   while ((lower < 0) || (lower >= CUBE_EXCEEDS_INT_MAX))
   {
      printf("Please enter a non-negative integer less than %d:  ", CUBE_EXCEEDS_INT_MAX);
      scanf("%d", &lower);
   }

   printf("Please enter the upper bound for the table:  ");
   scanf("%d", &upper);
   while ((upper < lower) || (upper >= CUBE_EXCEEDS_INT_MAX))
   {
      printf("Please enter an upper bound between %d and %d:  ", lower, CUBE_EXCEEDS_INT_MAX - 1);
      scanf("%d", &upper);
   }

   printf("\nPowers table from %d to %d:  \n\n", lower, upper);
   printf("   i\ti^2\ti^3\n");
   printf("--------------------------------\n");
   for (i = lower; i <= upper; ++i)
   {
      printf("   %d\t%d\t%d\n", i, i*i, i*i*i);
   }

}
