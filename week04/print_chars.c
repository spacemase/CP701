/*************************************************************
**
**  Mason Jensen
**  10/25/2006
**
**  Chapter 9, Programming Exercise 3.  Write a function that 
**  takes three arguments:  a character and two integers. The 
**  character is to be printed.  The first integer specifies 
**  the number of times that the character is to be printed 
**  on a line, and the second integer specifies the number 
**  of lines that are to be printed.  Write a program that 
**  makes use of this function.  
**
**
**
**************************************************************/

#include <stdio.h>

int get_valid_num(void);
void print_chars(char, int, int);

void main(void)
{
   char input_char;
   int num_char, num_lines;

   printf("Please enter the character for output:  ");
   input_char = getchar();

   printf("Enter the number of times to print this character per line:  ");
   num_char = get_valid_num();

   printf("Enter the number of lines to print:  ");
   num_lines = get_valid_num();

   print_chars(input_char, num_char, num_lines);
}



int get_valid_num(void)
{
   int temp;

   scanf("%d", &temp);
   while ((temp <= 0) || (temp > 40))
   {
      printf("Please enter a number greater than 0, no greater than 40:  ");
      scanf("%d", &temp);
   }

   return temp;
}



void print_chars(char c, int reps, int lines)
{
   int i, j;

   printf("\n");
   for (i = 0; i < lines; ++i)
   {
      for (j = 0; j < reps; ++j)
      {
         putchar(c);
      }
      printf("\n");
   }
}
