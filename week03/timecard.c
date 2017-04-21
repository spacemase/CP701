/*************************************************************
**
**  Mason Jensen
**  10/18/2006
**
**  Chapter 7, Programming Exercise 7. Write a program that 
**  requests the hours worked in a week and then prints the 
**  gross pay, the taxes, and the net pay. Assume the following:  
**
**    a. Base pay rate = $10.00/hr
**    b. Overtime (in excess of 40 hours) = time and a half
**    c. Tax rate:
**          15% of the first $300
**          20% of the next $150
**          25% of the rest
**
**  Use #define constants, and don't worry if the example does 
**  not conform to current tax law.
**
**
**
**************************************************************/

#include <stdio.h>

#define BASE_PAY_RATE			10.0
#define BASE_PAY_HOURS			40.0
#define OVERTIME_RATE			1.5
#define INCOME_BRACKET_1_RANGE		300.0
#define INCOME_BRACKET_2_RANGE		150.0
#define INCOME_BRACKET_1_TAXRATE	0.15
#define INCOME_BRACKET_2_TAXRATE	0.20
#define INCOME_BRACKET_3_TAXRATE	0.25

void main(void)
{
   double hours;
   double taxes = 0.0;
   double gross_income, net_income;

   printf("\nPlease enter your hours for the week:  ");
   scanf("%lf", &hours);

   /* compute gross pay */
   if (hours > BASE_PAY_HOURS)
      gross_income = BASE_PAY_RATE * BASE_PAY_HOURS 
                   + OVERTIME_RATE * BASE_PAY_RATE * (hours - BASE_PAY_HOURS);
   else
      gross_income = BASE_PAY_RATE * hours;

   /* compute taxes */
   if (gross_income > INCOME_BRACKET_1_RANGE + INCOME_BRACKET_2_RANGE)
   {
      taxes  = INCOME_BRACKET_1_TAXRATE * INCOME_BRACKET_1_RANGE;
      taxes += INCOME_BRACKET_2_TAXRATE * INCOME_BRACKET_2_RANGE;
      taxes += INCOME_BRACKET_3_TAXRATE * (gross_income - INCOME_BRACKET_1_RANGE - INCOME_BRACKET_2_RANGE);
   }
   else if (gross_income > INCOME_BRACKET_1_RANGE)
   {
      taxes  = INCOME_BRACKET_1_TAXRATE * INCOME_BRACKET_1_RANGE;
      taxes += INCOME_BRACKET_2_TAXRATE * (gross_income - INCOME_BRACKET_1_RANGE);
   }
   else
   {
      taxes = INCOME_BRACKET_1_TAXRATE * gross_income;
   }

   /* compute net pay */
   net_income = gross_income - taxes;

   printf("\n\tGross pay:\t\t$%.2lf", gross_income);
   printf("\n\tTaxes withheld:\t\t$%.2lf", taxes);
   printf("\n\tNet pay:\t\t$%.2lf\n", net_income);
}
