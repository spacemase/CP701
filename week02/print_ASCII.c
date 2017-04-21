/*************************************************************
**
**  Mason Jensen
**  10/11/2006
**
**  Chapter 3, Programming Exercise 2. Write a program that 
**  asks you to enter an ASCII code value, such as 66, and 
**  then prints the character having that ASCII code. 
**
**
**
**************************************************************/

#include <stdio.h>

void main(void)
{
   int val;
   char c;

   printf("\nEnter an ASCII value:  ");
   scanf("%d", &val);

   c = val;
   printf("\nYour ASCII value is assigned the character:  %c\n", c);
}
