#include <stdio.h>

void maxIndex(int a[], int size, int** pElement);

static int nFailedTests = 0;
static int nPassedTests = 0;

/* handy macro that prints out the file, line number, and args if a test fails */
#define CHECK(arg) if (!check(arg)) { printf("%s Failure at %d: \"%s\"\n", __FILE__, __LINE__, #arg); }

int check(int arg)
{
	if (arg == 0)
	{
		nFailedTests++;
		return 0;
	}

	nPassedTests++;
	return 1;
}

int printResults()
{
	printf("%d passed, %d failed\n", nPassedTests,
		nFailedTests);

	return nFailedTests;
}

int main()
{
	int ages[] = { 34, 24, 55, 44 };
	int* pIndex;
	maxIndex(ages, 4, &pIndex);

	CHECK(*pIndex == 55);

	return printResults();
}

void maxIndex(int a[], int size, int** pElement)
{
	int i;
	int maxIndex = 0;

	for (i = 1; i < size; i++)
	{
		if (a[i] > a[maxIndex])
		{
			maxIndex = i;
		}
	}

	*pElement = &a[maxIndex];
}