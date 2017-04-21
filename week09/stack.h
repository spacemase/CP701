#define STACK_MAX 500

typedef struct
{
	int stackArray[STACK_MAX];
	int currentIndex;
} IntStack;

void StackInit(
   IntStack* s);

int isPush(
	IntStack* s,
	int value);

int isPop(
	IntStack* s,
	int* value);

int isEmpty(
	IntStack* s);