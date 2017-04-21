/*************************************************************
**
**  Mason Jensen
**  10/11/2006
**
**  Chapter 5, Programming Exercise 2. Write a program that 
**  asks for an integer and then prints all the integers from 
**  (and including) that value up to (and including) a value 
**  larger by 10. (That is, if the input is 5, the output runs 
**  from 5 to 15). Be sure to separate each output value by a 
**  space or tab or newline.
**
**
**
**************************************************************/

#include <stdio.h>

void main(void)
{
   int i, val;

   printf("\nEnter an integer:  ");
   scanf("%d", &val);

   for (i=val; i <= val+10 ; i++)
   {
     printf("\n\t%i", i);
   }
   printf("\n");
}
