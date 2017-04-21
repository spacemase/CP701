/*************************************************************
**
**  Mason Jensen
**  10/04/2006
**
**  Chapter 1, Programming Exercise 1.  You have just been 
**  employed by MacroMuscle, Inc.  (Software for Hard Bodies).  
**  They are entering the European market and want a program 
**  that converts inches to centimeters (1" = 2.54 cm).  They 
**  want the program set up so that it prompts the user to 
**  enter an inch value.  Your assignment is to define the 
**  program objectives and to design the program (steps 1 
**  and 2 of the programming process).  
**
**
**
**  Program Objectives:
**
**       This will be a command line program that will prompt 
**     the user to input a value, in inches, from the 
**     keyboard.  This value will then be converted to 
**     centimeters and output the result to the screen.
**
**  Program Design:
**
**     Input:        inches value
**     Output:       centimeter value
**     Assumptions:  0 < inches < MAX_DOUBLE
**
**************************************************************/

#include <stdio.h>

#define CENTIMETERS_PER_INCH 2.54 

void main(void)
{
   double inches, centimeters;

   printf("\nEnter the value in inches:  ");
   scanf("%lf", &inches);

   centimeters = inches * CENTIMETERS_PER_INCH;

   printf("\nValue in centimeters:  %lf\n", centimeters);
}
