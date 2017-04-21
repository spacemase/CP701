/*************************************************************
**
**  Mason Jensen
**  10/11/2006
**
**  Chapter 5, Programming Exercise 3. Write a program that 
**  asks the user to enter the number of days and then converts 
**  that value to weeks and days.  For example, it would convert 
**  18 days to 2 weeks, 4 days. Display results in the following 
**  format:
**
**    18 days are 2 weeks, 4 days.
**
**
**
**************************************************************/

#include <stdio.h>

#define DAYS_IN_WEEK 7

void main(void)
{
   int val, days, weeks;

   printf("\nEnter number of days:  ");
   scanf("%d", &val);

   weeks = val / DAYS_IN_WEEK;
   days = val % DAYS_IN_WEEK;

   printf("\n\n%d days are %d weeks, %d days.\n", val, weeks, days);
}
