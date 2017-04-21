#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

int getNumber();
void seedRandomNumberGenerator();
int askUser(int, int);
int checkResults(int result, int a, int b);

main()
{
	int result;
	int a;
	int b;

	seedRandomNumberGenerator();

	while (TRUE)
	{
		a = getNumber();
		b = getNumber();

		do 
		{
			result = askUser(a, b);
		}
		while (FALSE == checkResults(result, a, b));
	}
}

int checkResults(
	int result,
	int a,
	int b)
{
	if (result == a * b)
	{
		printf("Very Good!\n");

		return TRUE;
	}
	else
	{
		printf("Please try again.\n");

		return FALSE;
	}
}

void seedRandomNumberGenerator()
{
	/* Seed from the clock */
	unsigned int seed = (unsigned int) time(NULL);

	srand(seed);
}

int getNumber()
{
	int number = rand() % 10;

	return number;
}

int askUser(
	int a,
	int b)
{
	int answer;

	printf("How much is %d times %d?\n", a, b);

	scanf("%d", &answer);

	return answer;
}