
/*
** Extra credit homework assignment (4 points):  
** 
** Write a program that prints the following pattern separately one below the other.
** Use for loops to generate the patterns. All asterisks (*) should be printed by a
** single printf statements of the form printf("*");, printf(" "); and printf("\n").
** (this causes the asterisks to print side by side)
** 
**              *
**             **
**            ***
**           ****
**          *****
**         ******
**        *******
**       ********
**      *********
**     ********** 
*/

#include <stdio.h>

#define DIMENSION 10

void main()
{
    int i;
    int j;

    for (i = 0; i < DIMENSION; i++)
    {
        for (j = 0; j < DIMENSION; j++)
        {
            if (j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

/*
** Extra credit homework assignment 2 (4 points):
**
** Calculate the value of pi from the infinite series
**
** pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
**
** Print a table that show the value of pi approximated by one term of this
** series, by two terms, by three terms, etc. How many terms of this series do you have
** to use before you first get 3.14? 3.141? 3.1415? 3.14159?
*/

#include <stdio.h>

void main()
{
    double numerator = 4.0;
    double denominator;
    double pi;
    int i;
    double termSign;
    int count;

    printf("Enter number of terms to evaluate: ");
    scanf("%d", &count);

    printf("Evaluating %d terms\n", count);

    numerator = 4.0;
    pi = 0.0;
    for (i = 0, denominator = 1.0, termSign = 1.0; i < count; i++, denominator += 2.0, termSign *= -1.0)
    {
        pi += ((numerator / denominator) * termSign);

        printf("%d:\t\t%g\n", i, pi);
    }

    printf("pi: %g\n", pi);
}

/*
** Chapter 6, Programming Exercise 3. Use nested loops to produce the following pattern:
** 
**     F
**     FE
**     FED
**     FEDC
**     FEDCB
**     FEDCBA
*/
#include <stdio.h>

#define DIMENSION 6

void main()
{
    int i;
    int j;

    for (i = 0; i < DIMENSION; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", 'F' - j);
        }

        printf("\n");
    }
}

/*
** Chapter 6, Programming Exercise 5. Write a program that prints a table with each line
** giving an integer, its square, and its cube, Ask the user to input the lower and upper
** limits for the table. Use a for loop.
*/

#include <stdio.h>

void main()
{
    int lowerBound;
    int upperBound;
    int i;

    printf("Enter lower bound: ");
    scanf("%d", &lowerBound);

    printf("Enter upper bound: ");
    scanf("%d", &upperBound);

    printf("\n");
    printf("Value\tSquare\tCube\n");
    printf("-----\t------\t----\n");

    for (i = lowerBound; i <= upperBound; i++)
    {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
}

/*
** 
** Chapter 7, Review Question 2. Construct an expression to express the following conditions:
** 
** a. number is equal to or greater than 1 but smaller than 9. (number >= 1 && number < 9)
** 
** b. ch is not a q or a k character. (ch != 'q' && ch != 'k')
** 
** c. number is between 1 and 9 but is not a 5. (number > 0 && number < 10 && number != 5)
** 
** d. number is not between 1 and 9. (number < 1 || number > 9)
*/

/*
** Chapter 7, Review Question 4. What is the numerical value of each of the following expressions?
** 
** a. 5 > 2 (1)
** 
** b. 3 + 4 > 2 && 3 < 2 (0)
** 
** c. x >= y || y < x (1)
** 
** d. d = 5 + (6 > 2) (6)
** 
** e. 'X' > 'T' ? 10 : 5 (10)
** 
** f. x > y ? y > x : x > y (0)
*/

/*
** Chapter 7, Programming Exercise 7. Write a program that requests the hours worked
** in a week and then prints the gross pay, the taxes, and the net pay. Assume the following:
** 
** a. Base pay rate = $10.00/hr
** 
** b. Overtime (in excess of 40 hours) = time and a half
** 
** c. Tax rate        15% of the first $300
** 
**                    20% of the next $150
** 
**                    25% of the rest
** 
** Use #define constants, and don't worry if the example does not conform to current tax law.
*/

#include <stdio.h>

#define BASE_PAY_RATE 10.00f
#define OT_PAY_RATE 15.00f

#define LOW_BRACKET_SALARY 300.00f
#define MIDDLE_BRACKET_DELTA 150.00f
#define MIDDLE_BRACKET_SALARY 450.00f

#define LOW_BRACKET_RATE 0.15f
#define MIDDLE_BRACKET_RATE 0.20f
#define HIGH_BRACKET_RATE 0.25f

void main()
{
    int hoursWorked;
    float grossPay;
    float taxes;
    float netPay;

    printf("Enter hours worked: ");
    scanf("%d", &hoursWorked);

    if (hoursWorked <= 40)
    {
        grossPay = hoursWorked * BASE_PAY_RATE;
    }
    else
    {
        grossPay = 40 * BASE_PAY_RATE + (hoursWorked - 40) * OT_PAY_RATE;
    }

    if (grossPay <= LOW_BRACKET_SALARY)
    {
        taxes = grossPay * LOW_BRACKET_RATE;
    }
    else if (grossPay <= MIDDLE_BRACKET_SALARY)
    {
        taxes = LOW_BRACKET_SALARY * LOW_BRACKET_RATE;
        taxes += (grossPay - LOW_BRACKET_SALARY) * MIDDLE_BRACKET_RATE;
    }
    else
    {
        taxes = LOW_BRACKET_SALARY * LOW_BRACKET_RATE;
        taxes += MIDDLE_BRACKET_RATE * MIDDLE_BRACKET_DELTA;
        taxes += (grossPay - MIDDLE_BRACKET_SALARY) * HIGH_BRACKET_RATE;
    }

    netPay = grossPay - taxes;

    printf("Gross Pay:  %.2f\n", grossPay); 
    printf("Taxes:      %.2f\n", taxes);
    printf("Net Pay:    %.2f\n", netPay); 
}
