#include "stack.h"

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