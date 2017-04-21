/*************************************************************
**
**  Mason Jensen
**  11/15/2006
**
**  Write the function void swap3a(int a, int b, int c) which 
**  copies the value for a into b, the value for b into c, and 
**  the value for c into a. Write the function 
**  void swap3b(int* a, int* b, int* c) which copies the value 
**  for a into b, the value for b into c, and the value for c 
**  into a.  Write a main program which exercises swap3a() and 
**  swap3b.  Explain the differences between swap3a and swap3b.  
**
**
**
**************************************************************/

#include <stdio.h>

void swap3a(int, int, int);
void swap3b(int*, int*, int*);

void main(void)
{
   int i = 0;
   int j = 1;
   int k = 2;

   printf("Initial values:\n");
   printf("\ti = %d\n", i);
   printf("\tj = %d\n", j);
   printf("\tk = %d\n", k);

   swap3a(i, j, k);
   printf("\nValues after swap3a:\n");
   printf("\ti = %d\n", i);
   printf("\tj = %d\n", j);
   printf("\tk = %d\n", k);

   swap3b(&i, &j, &k);
   printf("\nValues after swap3b:\n");
   printf("\ti = %d\n", i);
   printf("\tj = %d\n", j);
   printf("\tk = %d\n", k);
}

/************************************************************
**
**  swap3a employs pass by value to get the values for its
**  formal parameters.  Thus a copy of the values are created
**  for use within the function.  The actual variables passed
**  into the function are not changed in main.
**
*************************************************************/
void swap3a(int a, int b, int c)
{
   int temp = a;
   a = c;
   c = b;
   b = temp;
}

/************************************************************
**
**  swap3b employs pass by reference to get the values of its
**  formal parameters.  Since pointers are used, the original
**  values are changed in main.
**
*************************************************************/
void swap3b(int* a, int* b, int* c)
{
   int temp = *a;
   *a = *c;
   *c = *b;
   *b = temp;
}
