/*************************************************************
**
**  Mason Jensen
**  11/15/2006
**
**  Chapter 10, Programming Exercise 2.  Write a program that 
**  initializes an array of double and then copies the contents 
**  of the array into two other arrays.  (All three arrays 
**  should be declared in the main program.)  To make the first 
**  copy, use a function with array notation.  To make the 
**  second copy, use a function with pointer notation and 
**  pointer incrementing.  Have each function take as arguments 
**  the name of the source array, the name of the target array, 
**  and the number of elements to be copied.  That is, the 
**  function calls would look like this, given the following 
**  declarations:  
**
**     double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
**     double target1[5];
**     double target2[5];
**     copy_arr(source, target1, 5);
**     copy_ptr(source, target2, 5);
**
**
**
**************************************************************/

#include <stdio.h>

void copy_arr(double[], double[], int);
void copy_ptr(double*, double*, int);

void main(void)
{
   int i;
   double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   double target1[5];
   double target2[5];

   copy_arr(source, target1, 5);
   copy_ptr(source, target2, 5);

   printf("Contents of target1 post-copy:\n");
   for(i = 0; i < 5; ++i)
      printf("\t%.2lf", target1[i]);

   printf("\n\nContents of target2 post-copy:\n");
   for(i = 0; i < 5; ++i)
      printf("\t%.2lf", target2[i]);
}

void copy_arr(double src[], double target[], int length)
{
   int i;

   for(i = 0; i < length; ++i)
      target[i] = src[i];
}

void copy_ptr(double *src, double *target, int length)
{
   int i;

   for(i = 0; i < length; ++i)
      *(target + i) = *(src + i);
}
