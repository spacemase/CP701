#include <stdio.h>

static int nFailedTests = 0;
static int nPassedTests = 0;

#define STACK_MAX 500

typedef struct
{
	int stackArray[STACK_MAX];
	int currentIndex;
} IntStack;

void StackInit(
   IntStack* s)
{
	s->currentIndex = 0;
}

int isPush(
	IntStack* s,
	int value)
{
	if (s->currentIndex < STACK_MAX)
	{
		int index = s->currentIndex;
		s->stackArray[index] = value;
		s->currentIndex++;
		return 1;
	}

	return 0;
}

int isPop(
	IntStack* s,
	int* value)
{
	if (s->currentIndex != 0)
	{
		int index = --s->currentIndex;
		*value = s->stackArray[index];
		return 1;
	}

	return 0;
}

int isEmpty(
	IntStack* s)
{
	return !s->currentIndex;
}

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

void testPopOne()
{
	IntStack t;
	int value;
	StackInit(&t);

	CHECK(isPush(&t, 56) != 0);

	CHECK(isEmpty(&t) == 0);
	CHECK(isPop(&t, &value));
	CHECK(value == 56);
	CHECK(isEmpty(&t) != 0);
}

void testPopEmptyStack()
{
	IntStack t;
	int value;
	StackInit(&t);

	CHECK(isPop(&t, &value) == 0);
}

void testOverflow()
{
	IntStack t;
	int i;
	StackInit(&t);

	for (i = 0; i < STACK_MAX+5; i++)
	{
		isPush(&t, i);
	}

	CHECK(isPush(&t, 67) == 0);
}

int main()
{
	int x = 3, y = 5;
	testPopOne();
	testPopEmptyStack();
	testOverflow();

	return printResults();
}