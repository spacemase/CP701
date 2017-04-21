#include <stdio.h>

#define STACK_MAX 256

struct doubleStack
{
	double stack[STACK_MAX];
	int currentStackIndex;
};

#define SUCCESS 1
#define STACK_FULL 2
#define STACK_EMPTY 3

void initStack(struct doubleStack* s)
{
	s->currentStackIndex = 0;
}

int push(struct doubleStack* ds, double value)
{
	if (ds->currentStackIndex < STACK_MAX)
	{
		ds->stack[ds->currentStackIndex] = value;
		ds->currentStackIndex++;
		return SUCCESS;
	}

	return STACK_FULL;
}

int pop(struct doubleStack* ds, double* value)
{
	if (ds->currentStackIndex == 0)
	{
		return STACK_EMPTY;
	}

	ds->currentStackIndex--;
	*value = ds->stack[ds->currentStackIndex];

	return SUCCESS;
}

void printStack();

int main()
{
	struct doubleStack s;
	struct doubleStack s2;
	int i;
	int status;
	double d;

	initStack(&s);
	initStack(&s2);
	for (i = 0; i < STACK_MAX; ++i)
	{
		status = push(&s, i);
		if (status == STACK_FULL)
		{
			printf("Error in stack");
		}
	}

	push(&s2, 1004.5);

	status = push(&s, 67);
	if (status == SUCCESS)
	{
		printf("Error stack should be full");
	}

	for (i = 0; i < STACK_MAX; i++)
	{
		status = pop(&s, &d);

		if (status != SUCCESS)
		{
			printf("Error stack should have an element to pop");
		}
	}

	status = pop(&s, &d);

	if (status == SUCCESS)
	{
		printf("Error stack should be empty\n");
	}
}