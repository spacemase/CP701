#include <stdio.h>

static int nFailedTests = 0;
static int nPassedTests = 0;

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