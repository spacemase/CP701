/*
** Chapter 10, Review Question 7. Create an appropriate declaration
** for each of the following variables:
**
** a. digits is an array of ten ints - Answer: int digits[10];
** 
** b. rates is an array of six floats - Answer: float rates[6];
** 
** c. mat is an array of three arrays of five integers - Answer: int mat[3][5];
** 
** d. pstr is a pointer to an array of 20 chars - Answer: char (*pstr)[20];
** 
** e. psa is an array of 20 pointers to char - Answer: char* psa[20];
*/

/*
** Chapter 10, Review Question 8.
** 
** a. Declare an array of six ints and initialize it to the
**    values 1, 2, 4, 8, 16, and 32.
**    Answer: int arr[] = {1, 2, 4, 8, 16, 32};
** 
** b. Use array notation to represent the third element
**    (the one with the value 4) of the array in part a.
**    Answer: arr[2];
*/

/* 
** Chapter 10, Programming Exercise 4. Write a function that returns
** the index of the largest value stored in an array. Test the function
** in a simple program.
*/

#include <stdio.h>

#define NUMBER(array) (sizeof(array) / sizeof(array[0]))

int getLargestValueIndex(const int values[], int numValues);

void main()
{
    int someValues[] = {3, 45, 67, 12, 56, 89, -34};
    int indexOfLargestValue = getLargestValueIndex(someValues, NUMBER(someValues));

    printf("Index of largest value is: %d\n", indexOfLargestValue);
    printf("Largest value is: %d\n", someValues[indexOfLargestValue]);
}

int getLargestValueIndex(
    const int values[],
    int numValues)
{
    int i;
    int largestValueIndex = 0;

    for (i = 1; i < numValues; i++)
    {
        if (values[i] > values[largestValueIndex])
        {
            largestValueIndex = i;
        }
    }

    return largestValueIndex;
}

/*
** Chapter 10, Programming Exercise 8. Write a function that sets each element
** in an array to the sum of the corresponding elements in two other arrays,
** that is, if array 1 has the values 2, 4, 5, and 8 and array 2 has the values
** 1, 0, 4, and 6, the function assigns array 3 the values 3, 4, 9, and 14. The
** function should take three array names and an array size as arguments.
** Test the function in a simple program.
*/

#include <stdio.h>

#define NUMBER(array) (sizeof(array) / sizeof(array[0]))

void sumArrays(const int n1[], const int n2[], int sum[], int numElements);
void printArray(const int values[], int numElements);

int main()
{
    int values1[] = {2, 4, 5, 8};
    int values2[] = {3, 4, 9, 14};
    int sum[NUMBER(values1)];

    sumArrays(values1, values2, sum, NUMBER(values1));

    printArray(values1, NUMBER(values1));
    printf("+\n");
    printArray(values2, NUMBER(values1));
    printf("=\n");
    printArray(sum, NUMBER(values1));
}

void sumArrays(
    const int n1[],
    const int n2[],
    int sum[],
    int numElements)
{
    int i;

    for (i = 0; i < numElements; i++)
    {
        sum[i] = n1[i] + n2[i];
    }
}

void printArray(
    const int values[],
    int numElements)
{
    int i;

    for (i = 0; i < numElements; i++)
    {
        printf("%d ", values[i]);
    }

    printf("\n");
}

/*
** Implement a stack data structure for storing double precision numbers. Build the stack using these pieces:
** 
** #define STACK_MAX 256 maximum numbers that may be on the stack at any one time
** 
** double stack[STACK_MAX]; global array used to build the stack
** 
** double currentStackIndex = 0; global index of current top of the stack
** 
** void push(double); /* function prototype for function to push a value onto the stack
** 
** double pop(); function prototype for function to pop a value off the stack
** 
** void printStack(); function prototype for function to print all the values currently on the stack
** 
** Your assignment is to implement push(), pop(), and printStack().Write a main program that
** tests the stack. Your implementation must handle the case when pop() is called on an empty stack,
** and when push is called on a full stack.
*/

#include <stdio.h>

/* maximum numbers that may be on the stack at any one time */
#define STACK_MAX 256

/* global array used to build the stack */
double stack[STACK_MAX];

/* global index of current top of the stack */
int currentStackIndex = 0;

/* function prototype for function to push a value onto the stack */
void push(double);

/* function prototype for function to pop a value off the stack */
double pop();

/* function prototype for function to print all the values currently on the stack */
void printStack();

void main()
{
	int i;

	/*
	** push a few double precision numbers on the stack and print it
	*/
	push(34.5);
	push(25.789);
	push(56.7);
	printStack();

	/* pop a value off the stack, print the value, and the remaining contents of the stack */
	printf("Popped %lf off the stack\n", pop());
	printStack();

	/* pop more values off the stack than the stack currently contains */
	pop();
	pop();
	pop();

	/* push more values on the stack than it can hold */
	for (i = 0; i < 258; i++)
	{
		push((double)i);
	}

	printStack();
}

void push(double value)
{
	if (currentStackIndex < STACK_MAX)
	{
		stack[currentStackIndex] = value;
		currentStackIndex++;
	}
	else
	{
		printf("Exceeded stack max\n");
	}
}

double pop()
{
	if (currentStackIndex > 0)
	{
		currentStackIndex--;
		return stack[currentStackIndex];
	}
	else
	{
		printf("Trying to pop an empty stack\n");
	}

	return 0.0;
}

void printStack()
{
	if (currentStackIndex > 0)
	{
		int i;

		printf("Contents of stack:\n");
		for (i = currentStackIndex - 1; i >= 0 ; i--)
		{
			printf("%lf\n", stack[i]);
		}
	}
	else
	{
		printf("Stack is empty");
	}
}
