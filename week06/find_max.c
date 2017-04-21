/*************************************************************
**
**  Mason Jensen
**  11/08/2006
**
**  Chapter 10, Programming Exercise 4:  Write a function that 
**  returns the index of the largest value stored in an array 
**  of double.  Test the function in a simple program.  
**
**
**
**************************************************************/

#include <stdio.h>

void testFindMax(double [],int, int);
int findMax(double [], int);

void main(void)
{
   double temp1[] = {0};
   double temp2[] = {0, 1};
   double temp3[] = {0, 1, 2};
   double temp4[] = {0, 1, 2, 3};
   double temp5[] = {0, 1, 2, 3, 4};
   double temp6[] = {4, 3, 2, 1, 0};
   double temp7[] = {-1, -2, -3};
   double temp8[] = {1, 2, 3, 2, 1};

   testFindMax(temp1, sizeof(temp1) / sizeof(temp1[0]), 0);
   testFindMax(temp2, sizeof(temp2) / sizeof(temp2[0]), 1);
   testFindMax(temp3, sizeof(temp3) / sizeof(temp3[0]), 2);
   testFindMax(temp4, sizeof(temp4) / sizeof(temp4[0]), 3);
   testFindMax(temp5, sizeof(temp5) / sizeof(temp5[0]), 4);
   testFindMax(temp6, sizeof(temp6) / sizeof(temp6[0]), 0);
   testFindMax(temp7, sizeof(temp7) / sizeof(temp7[0]), 0);
   testFindMax(temp8, sizeof(temp8) / sizeof(temp8[0]), 2);
}



void testFindMax(double store[], int num, int expected)
{
   int actual = findMax(store, num);

   if (actual == expected)
     printf("PASS\n");
   else
     printf("FAIL\n\texpected = %d\n\tactual = %d\n", expected, actual);
}



int findMax(double store[], int n)
{
   int i;
   int index = 0;

   if (n == 1) return index;

   for (i = 1; i < n; ++i)
     if (store[i] > store[i-1])
       index = i;

   return index;
}


