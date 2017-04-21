/*************************************************************
**
**  Mason Jensen
**  10/04/2006
**
**  Chapter 2, Programming Exercise 3.  Write a program that 
**  converts your age in years to days and displays both 
**  values.  At this point, don't worry about fractional years 
**  and leap years.  
**
**************************************************************/

#include <stdio.h>

#define DAYS_PER_YEAR 364 

void main(void)
{
   int age, days;

   printf("\nEnter your age in years:  ");
   scanf("%d", &age);

   days = age * DAYS_PER_YEAR;

   printf("\nAt %d years, you are %d days old!!!\n", age, days);
}
