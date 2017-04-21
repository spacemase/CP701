#include <stdio.h>
#include <string.h>

#include "check.h"
#include "stack.h"

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

void myStrNCpy(
	char* dest,
	char* source,
	unsigned count)
{
	unsigned int i;

	for (i = 0; source[i] != '\0' && i < count; i++)
	{
		dest[i] = source[i];
	}

	if (i != count)
	{
		dest[i] = '\0';
	}
	else if (i != 0)
	{
		dest[i-1] = '\0';
	}
}

void testStrNCopy1()
{
	char name[256];
	myStrNCpy(name, "David", 256);

	CHECK(strcmp(name, "David") == 0);
}

void testStrNCopy2()
{
	char name[5];
	myStrNCpy(name, "David Nielsen", 5);

	CHECK(strcmp(name, "Davi") == 0);
}

void testStrNCopy3()
{
	char name[5];
	myStrNCpy(name, "Hello", 0);

	CHECK(strcmp(name, "") == 0);
}
int main()
{
	testPopOne();
	testPopEmptyStack();
	testOverflow();
	testStrNCopy1();
	testStrNCopy2();
	testStrNCopy3();

	return printResults();
}