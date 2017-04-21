/*************************************************************
**
**  Mason Jensen
**  12/13/2006
**
**  Chapter 4, Programming Exercise 2. Write a program that 
**  requests your first name and does the following with it:
**
**  a. Prints it enclosed in double quotation marks.
**  b. Prints it in a field 20 characters wide, with the whole 
**     field in quotes.
**  c. Prints it at the left end of a field 20 characters wide, 
**     with the whole field enclosed in quotes.
**  d. Prints it in a field 3 characters wider than the name.
**
**************************************************************/

#include <stdio.h>

void main(void)
{
   char *name;

   printf("Please enter your name:  ");
   scanf(name);

   printf("\n\"%s\"\n", name);
   printf("\n\"%20s\"\n", name);
   printf("\n\"%s\"\n", name);
   printf("\n\x020\x020\x020%s\n", name);
}

