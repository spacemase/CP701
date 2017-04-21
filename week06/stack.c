/*************************************************************
**
**  Mason Jensen
**  11/08/2006
**
**
**  
**  Extra credit homework assignment (6 points):  
**  
**  Implement a stack data structure for storing double precision 
**  numbers.  Build the stack using these pieces:  
**  
**  #define STACK_MAX 256      ** maximum numbers that may be on the
**                             ** stack at any one time
**  
**  double stack[STACK_MAX];   ** global array used to build the stack
**  
**  int currentStackIndex = 0; ** global index of current top of the stack
**  
**  void push(double);         ** function prototype for function to push a
**                             ** value onto the stack
**  
**  double pop();              ** function prototype for function to pop
**                             ** a value off the stack
**  
**  void printStack();         ** function prototype for function to print all
**                             ** the values currently on the stack
**  
**  Your assignment is to implement push(), pop(), and printStack().  
**  Write a main program that tests the stack. Your implementation 
**  must handle the case when pop() is called on an empty stack, and 
**  when push is called on a full stack.  
**
**
**
**************************************************************/

#include <stdio.h>

#define STACK_MAX 256

double stack[STACK_MAX];
int currentStackIndex = 0;

void push(double);
double pop(void);
void printStack(void);

void main(void)
{
   printStack();
   printf("POP off the top:  %.2lf\n", pop());
   push(1.718);
   push(3.14159);
   printStack();
   printf("POP off the top:  %.2lf\n", pop());
   printStack();
}



void push(double val)
{
   if (currentStackIndex == STACK_MAX)
      printf("Push failed! => Stack is full.\n");
   else
      stack[currentStackIndex++] = val;
}



double pop(void)
{
   if (currentStackIndex > 0)
      return stack[--currentStackIndex];
   else
      return -1;
}



void printStack(void)
{
   int i;

   printf("CURRENT STACK:\n");
   for (i = currentStackIndex - 1; i >= 0; --i)
      printf("\t%.2lf\n", stack[i]);
   printf("\n");
}


