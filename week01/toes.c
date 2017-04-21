/*************************************************************
**
**  Mason Jensen
**  10/04/2006
**
**  Chapter 2, Programming Exercise 5.  Write a program that 
**  creates an integer variable called toes.  Have the program 
**  set toes to 10.  Also have the program calculate what 
**  twice toes is and what toes squared is.  The program 
**  should print all three values, identifying them.  
**
**************************************************************/

#include <stdio.h>

void main(void)
{
   int toes = 10;

   printf("\nToes is equal to:  %d\n", toes);
   printf("Twice toes is equal to:  %d\n", toes * 2);
   printf("Toes squared is equal to:  %d\n", toes * toes);
}
