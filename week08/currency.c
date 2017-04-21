#include "currency.h"

#include "stdio.h"

CURRENCY createCurrency(int dollars, int cents)
{
	CURRENCY c;
	c.dollars = dollars;
	c.cents = cents;

	return c;
}

void printCurrency(CURRENCY c)
{
	printf("$%d.%d\n", c.dollars, c.cents);
}

CURRENCY percent(CURRENCY c, int percent)
{
	int totalCents = c.dollars * 100 + c.cents;
	int percentCents = (int)(totalCents * percent / 100.0 + 0.5);

	CURRENCY result;
	result.dollars = percentCents / 100;
	result.cents = percentCents % 100;
	
	return c;
}

