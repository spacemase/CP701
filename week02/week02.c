/*
** Chapter 3, Review Question 1. Which data type would you use for each of the following kinds of data?
** 
** a. The population of Rio Frito. Answer: unsigned int
** 
** b. The average weight of a Rembrandt painting. Answer: float
** 
** c. The most common letter in this chapter. Answer: char
** 
** d. The number of times that letter occurs in this chapter. Answer: unsigned short
**
**
** Chapter 3, Review Question 2. Why would you use a type long variable instead of type int?
**
** Answer: When the range of values required for the data stored in the variable is larger
** than an int can represent.
**
**
** Chapter 3, Review Question 5. Identify the data type (as used in declaration statements) 
** and the printf() format specifier for each of the following constants:
**
**
**                      data type              format specifier
**                      ---------              ----------------
**
** a. 12                int                    %d
**
** b 0X3                int                    %x
**
** c. 'C'               char                   %c
**
** d. 2.34E07           double                 %e
**
** e. '\040'            char                   %c
**
** f 7.0                float                  %f
**
** g. 6L                long int               %ld
**
** h 6.0f               float                  %f
**
*/

/*
** Chapter 3, Programming Exercise 2. Write a program that asks you to enter an ASCII code value,
** such as 66, and then prints the character having that ASCII code.
*/
#include <stdio.h>

void main()
{
	int ch;

	printf("Please enter an ASCII code value: ");

	scanf("%d", &ch);

	printf("You entered the character %c\n", ch);
}

/* Chapter 5, Review Question 1. Assume all variables are of type int. Find 
** the value of each of the following variables:
**
** a. x = (2 + 3) * 6;           Answer: x = 30
**
** b. x = (12 + 6)/2*3;          Answer: x = 27
**
** c. y = x = (2 + 3) / 4;       Answer: x = 1, y = 1
**
** d. y = 3 + 2*(x = 7 / 2);     Answer: x = 3, y = 9
**
*/

/*
** Chapter 5, Programming Exercise 2. Write a program that asks for an integer
** and then prints all the integers from (and including) that value up to (and including)
** a value larger by 10. (That is, if the input is 5, the output runs from 5 to 15).
*/
#include <stdio.h>

void main()
{
	int value;
	int i;

	printf("Please enter an integer: ");

	scanf("%d", &value);

	for (i = 0; i <= 10; i++)
	{
		printf("%d ", value + i);
	}

	printf("\n");
}

/*
** Chapter 5, Programming Exercise 3. Write a program that asks you to enter the number
** of days and then converts that value to weeks and days. For example, it would convert
** 18 days to 2 weeks, 4 days.
*/
#include <stdio.h>

void main()
{
	int totalDays;
	int numWeeks;
	int numDays;

	printf("Please enter number of days: ");

	scanf("%d", &totalDays);

	numWeeks = totalDays / 7;
	numDays = totalDays % 7;

	printf("That is %d weeks %d days\n", numWeeks, numDays);
}
