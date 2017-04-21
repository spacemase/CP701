/*
** Chapter 4, Review Question 5. Suppose a program starts like this:
** 
**     #define BOOK "War and Peace"
**     int main(void)
**     {
**          float cost = 12.99;
**          float percent = 80.0;
** 
** Construct a printf() program that uses BOOK, cost, and percent to print the following:
** 
** This copy of "War and Peace" sells for $12.99.
** That is 80% of list.
*/

#if 0
#include <stdio.h>

#define BOOK "War and Peace"
int main(void)
{
    float cost = 12.99f;
    float percent = 80.0f;

    printf("This copy of \""BOOK"\" sells for $%.2f\n", cost);
    printf("That is %.0f%% of list\n", percent);

    return 0;
}
#endif

/*
** Chapter 4, Programming Exercise 2. Write a program
** that requests your first name and does the following with it:
** 
** a. Prints it enclosed in double quotation marks.
** 
** b. Prints it in a field 20 characters wide, with the whole field in quotes.
** 
** c. Prints it at the left end of a field 20 characters wide,
**    with the whole field enclosed in quotes.
** 
** d. Prints it in a field 3 characters wider than the name.
*/

#if 0
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[256];

    printf("Enter your first and last name: ");
    scanf("%[^\n]", name);

    printf("a. \"%s\"\n", name);
    printf("b. \"%20s\"\n", name);
    printf("c. \"%-20s\"\n", name);
    printf("d. \"%*s\"\n", strlen(name) + 3, name);

    return 0;
}

#endif

/*
** Chapter 4, Programming Exercise 3. Write a program that
** reads in a floating point number and prints it first in decimal-point
** notation and then in exponential notation. Have the output use the
** following formats:
** 
** a. The input is 21.3 or 2.1e+001.
** 
** b. The input is +21.290 or 2.129E+001
*/

#if 0
#include <stdio.h>

int main(void)
{
    double value;

    printf("Enter a floating point number: ");
    scanf("%lf", &value);

    printf("a. The input is %.1f or %.1e\n", value, value);
    printf("b. The input is %+.3f or %.3E\n", value, value);

    return 0;
}

#endif

/* 
** Chapter 8, Review Question 1. putchar(getchar()) is a valid expression;
** what does it do? Is getchar(putchar()) also valid?
**
** Answer:
** putchar(getchar()) writes a single character read from stdin to stdout.
** getchar(putchar()) is not a valid statement. putchar() reqires an argument,
** while getchar() does not require an argument. The second statement
** causes a compilation error.
*/

/*
** Chapter 8, Review Question 8. What potential problem do you face when
** intermixing numeric input with character input on a buffered system?
**
** Answer:
** scanf() uses white space characters as delimiters when reading numeric input.
** scanf() includes whitespace characters as part of the input for character input.
*/



/*
** Write a program that reads input until encountering EOF. Have it
** report the number of uppercase letters and the number of lowercase
** letters in the input. Use the functions isalpha() and isupper() from
** ctype.h to determine whether a character is alphabetic and upper or lower case.
*/

#if 1
#include <stdio.h>
#include <ctype.h>

void main()
{
    int ch;
    int numUpperChars = 0;
    int numLowerChars = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            if (isupper(ch))
            {
                numUpperChars++;
            }
            else
            {
                numLowerChars++;
            }
        }
    }

    printf("%d upper case characters entered\n", numUpperChars);
    printf("%d lower case characters entered\n", numLowerChars);
}

#endif
