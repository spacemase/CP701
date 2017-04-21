
#include "currency.h"
#include "currency.h"

#include <stdio.h>

int main()
{
	CURRENCY priceGas = createCurrency(5, 23);
	CURRENCY gasTax = percent(priceGas, 23);

	printCurrency(priceGas);
	printCurrency(gasTax);
}
