/*
** Chapter 10, Review Question 4. What is the value of *ptr and *(ptr + 2)
** in each case?
**
** a.
** int* ptr;
** int torf[2][2] = {12, 14, 16};
** ptr = torf[0];
**
** Answer: *ptr: 12, *(ptr + 2): 16
** 
** b.
**     int* ptr;
**     int fort[2][2] = { {12}, {14, 16} };
**     ptr = fort[0];
**
** Answer: *ptr: 12, *(ptr + 2): 14
*/


/*
** Chapter 10, Review Question 2. Write a program that initializes an array and
** then copies the contents of the array into two other arrays. (All three
** arrays should be declared in the main program.) To make the first copy, use a
** function with array notation. To make the second copy, use a function with
** pointer notation and pointer incrementing. Have each function take as
** arguments the name of the source array, the name of the target array, and
** the number of elements to be copied.
*/

#include <stdio.h>

#define ELEMENT_COUNT 4

void copyArrayUsingArrayNotation(
    const int source[],
    int dest[],
    int numElements);

void copyArrayUsingPointerNotation(
    const int* source,
    int* dest,
    int numElements);

void printArray(
    const int* array,
    int numElements);

void main()
{
    int original[] = { 5, 10, 15, 20 };
    int copy1[ELEMENT_COUNT];
    int copy2[ELEMENT_COUNT];

    copyArrayUsingArrayNotation(original, copy1, ELEMENT_COUNT);
    copyArrayUsingPointerNotation(original, copy2, ELEMENT_COUNT);

    printf("Original array: ");
    printArray(original, ELEMENT_COUNT);

    printf("copy1: ");
    printArray(copy1, ELEMENT_COUNT);

    printf("copy2: ");
    printArray(copy2, ELEMENT_COUNT);
}

void copyArrayUsingArrayNotation(
    const int source[],
    int dest[],
    int numElements)
{
    int i;

    for (i = 0; i < numElements; i++)
    {
        dest[i] = source[i];
    }
}

void copyArrayUsingPointerNotation(
    const int* source,
    int* dest,
    int numElements)
{
    while (numElements--)
    {
        *dest++ = *source++;
    }
}

void printArray(
    const int* array,
    int numElements)
{
    while (numElements--)
    {
        printf("%d ", *array++);
    }

    printf("\n");
}

/*
** Write the function void swap3a(int a, int b, int c) which copies the value
** for a into b, the value for b into c, and the value for c into a. Write the
** function void swap3b(int* a, int* b, int* c) which copies the value for a into
** b, the value for b into c, and the value for c into a. Write a main program
** which exercises swap3a() and swap3b. Explain the differences between swap3a
** and a swap3b.
*/

#include <stdio.h>

/*
** Differences between swap3a() and swap3b():
**
**   callers of swap3a() do not see the changes made to a, b, and c
**   because call by value is used.
**
**   callers of swap3b() see the changes made to a, b, and c because
**   call by reference is used.
*/
void swap3a(int, int, int);
void swap3b(int*, int*, int*);

main()
{
	int x = 3;
	int y = 4;
	int z = 5;

	printf("Before swapping x: %d, y: %d, z: %d\n", x, y, z);

	swap3a(x, y, z);
	printf("Values after calling swap3a\n");
	printf("    x: %d, y: %d, z: %d\n", x, y, z);

	swap3b(&x, &y, &z);
	printf("Values after calling swap3b\n");
	printf("    x: %d, y: %d, z: %d\n", x, y, z);

}

void swap3a(
	int a,
	int b,
	int c)
{
	int savedValue;

	savedValue = a;
	a = c;
	c = b;
	b = savedValue;
}

void swap3b(
	int* a,
	int* b,
	int* c)
{
	int savedValue = *a;
	*a = *c;
	*c = *b;
	*b = savedValue;
}

/* 
** Write the function void myStrNCopy(char dest[], char source[], int count)
** which copies the string in source to the string in destination. Copy at most
** count characters from source to dest. (This is your version of the C standard
** library function strncpy()) Write a main program which exercises myStrNCopy().
*/

#include <stdio.h>

#define MAX_STRING_SIZE 256

void myStrNCopy(
    char dest[],
    const char source[],
    int count);

void main()
{
    char str[MAX_STRING_SIZE];

    myStrNCopy(str, "Cats like to rock", MAX_STRING_SIZE);

    printf("After copy str: %s\n", str);
}

void myStrNCopy(
    char dest[],
    const char source[],
    int count)
{
    while ((*dest++ = *source++) && count--)
    {
        // intentional null body
    }
}

