#ifndef CURRENCY_H_ALREADY_INCLUDED
#define CURRENCY_H_ALREADY_INCLUDED

typedef struct
{
	int dollars;
	int cents;
} CURRENCY;

CURRENCY createCurrency(int dollars, int cents);
CURRENCY percent(CURRENCY c, int percent);

void printCurrency(CURRENCY);

#endif