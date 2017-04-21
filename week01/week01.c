/*
** Chapter 1, Programming Exercise 1. You have just been employed by MacroMuscle, Inc.
** (Software for Hard Bodies). They are entering the European market and want a program
** that converts inches to centimeters (1" = 2.54 cm). They want the program set up so
** that it prompts the user to enter an inch value. Your assignment is to define the program
** objectives and to design the program (steps 1 and 2 of the programming process).
**
** Define Program Objectives:
**
**    Provide user interface for entry of inch values. Convert inch input to centimeter
**    output using this equation: cm = inches * 2.54. Present the result to the user.
**
** Design the Program
**
**    Provide a command line text user interface which allow multiple conversions
**    in sequence until the user indicates they are done:
**
**    Enter inches (you may enter numbers in any of the following formats: X, X.X. X.XX)
**
**    [User enters: 33.4]
**
**    33.4 inches is 84.84 cm
**
**    Would you like to convert another number (y/n)?
**
**    [User enters: y]
**
**    Enter inches:
**
**    [User enters 9]
**
**    Would you like to convert another number (y/n)?
**
**    [User enters: n]
**
**    Program exits
**
**    Target User: MS-DOS European marketing personnel
**
**    Data: All data and calculations are performed using double precision.
*/

/*
** Chapter 2, Programming Exercise 1. Write a program that uses one printf() call 
** to print your first name and last name on one line, uses a second printf() call
** to print your first and last name on two separate lines, and uses a pair of
** printf() calls to print your first and last name on one line. The output should
** look like this (but using your name).
**
** Mae West            First print statement
** Mae                 Second print statement
** West                Still the second print statement
** Mae West            Third and fourth print statements
*/

#include <stdio.h>

void main()
{
	printf("David Nielsen\n");
	printf("David\nNielsen\n");
	printf("David ");
	printf("Nielsen\n");
}

/*
** Chapter 2, Programming Exercise 3. Write a program that converts your age in years
** to days. At this point, don't worry about fractional years and leap years.
*/

#include <stdio.h>

void main()
{
	int ageInYears;
	int ageInDays;

	printf("Enter your age: ");
	scanf("%d", &ageInYears);

	ageInDays = ageInYears * 365;

	printf("Your age in days is %d\n", ageInDays);
}

/*
** Chapter 2, Programming Exercise 5. Write a program that creates an integer
** variable called toes. Have the program set toes to 10. Also have the program
** calculate what twice toes is and what toes squared is. The program should print
** all three values, identifying them.
*/

#include <stdio.h>

void main()
{
	int toes = 10;

	printf("toes = %d\n", toes);
	printf("toes * 2 = %d\n", toes * 2);
	printf("toes squared = %d\n", toes * toes);
}
