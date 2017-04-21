/*
** Chapter 9, Review Question 1. What is the difference between an
** actual argument and a formal argument?
**
** A formal argument is a variable that is defined in the function being
** called. The actual argument is the value appearing in the function call;
** this value is assigned to the formal argument. You can think of the actual
** argument as being the value to which the formal argument is initialized
** when the function is called.
*/

/*
** Chapter 9, Programming Exercise 3. Write a function that takes three arguments:
** a character and two integers. The character is to be printed. The first integer
** specifies the number of times that the character is to be printed on a line, and
** the second integer specifies the number of lines that are to be printed. Write a
** program that makes use of this function.
*/
#include <stdio.h>

void printChars(char c, int numCharactersPerLine, int numLines);

void main()
{
    char ch;
    int chCount;
    int lineCount;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Enter the number of times to print the character on a line: ");
    scanf("%d", &chCount);

    printf("Enter the number of lines: ");
    scanf("%d", &lineCount);

    printChars(ch, chCount, lineCount);
}

void printChars(
    char c,
    int numCharactersPerLine,
    int numLines)
{
    int i;
    int j;

    for (i = 0; i < numLines; i++)
    {
        for (j = 0; j < numCharactersPerLine; j++)
        {
            putchar(c);
        }
        
        putchar('\n');
    }
}

/*
** Chapter 9, Programming Exercise 4. The harmonic mean of two numbers is obtained
** by taking the inverses of the two numbers, averaging them, and taking the inverse
** of the result. Write a function that takes two double arguments and returns the
** harmonic mean of the two numbers.
*/

#include <stdio.h>

double harmonicMean(double num1, double num2);

void main()
{
    double val1 = 1348.45;
    double val2 = 2305.7;

    printf("The harmonic mean of %g and %g is %g\n", val1, val2, harmonicMean(val1, val2));
}

double harmonicMean(
    double num1,
    double num2)
{
    return 1 / ((1/num1 + 1/num2) / 2);
}

/*
** Write a function integerPower(base, exponent) that returns the value of
** base**exponent. For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that
** exponent is a positive, nonzero integer, and base is an integer. The function
** integerPower should use a for loop to control the calculation. Do not use any
** math library functions.
*/

#include <stdio.h>

long int integerPower(int base, int exp);

void main()
{
    printf("5**6 = %d\n", integerPower(5, 6));
    printf("9**0 = %d\n", integerPower(9, 0));
    printf("0**6 = %d\n", integerPower(0, 6));
}

long int integerPower(
    int base,
    int exp)
{
    int i;
    long int result = 1;

    for (i = 0; i < exp; i++)
    {
        result *= base;
    }

    return result;
}


