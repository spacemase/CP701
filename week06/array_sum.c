/*************************************************************
**
**  Mason Jensen
**  11/08/2006
**
**  Chapter 10, Programming Exercise 9:  Write a function that 
**  sets each element in an array to the sum of the corresponding 
**  elements in two other arrays.  That is, if array 1 has the 
**  values 2, 4, 5, and 8 and array 2 has the values 1, 0, 4, 
**  and 6, the function assigns array 3 the values 3, 4, 9, 
**  and 14.  The function should take three array names and an 
**  array size as arguments.  Test the function in a simple 
**  program.  
**
**
**
**************************************************************/

#include <stdio.h>

#define ARRAY_SIZE 8

void testArraySum(int [], int [], int []);
void arraySum(int [], int [], int, int []);

void main(void)
{
   int array1[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7};
   int array2[ARRAY_SIZE] = {0, 2, 4, 6, 8, 10, 12, 14};
   int array3[ARRAY_SIZE] = {1, 3, 5, 7, 9, 11, 13, 15};
   int array4[ARRAY_SIZE] = {0, 3, 6, 9, 12, 15, 18, 21};
   int array5[ARRAY_SIZE] = {1, 4, 7, 10, 13, 16, 19, 22};
   int array6[ARRAY_SIZE] = {2, 5, 8, 11, 14, 17, 20, 23};

   int array12[ARRAY_SIZE] = {0, 3, 6, 9, 12, 15, 18, 21};
   int array13[ARRAY_SIZE] = {1, 4, 7, 10, 13, 16, 19, 22};
   int array14[ARRAY_SIZE] = {0, 4, 8, 12, 16, 20, 24, 28};
   int array15[ARRAY_SIZE] = {1, 5, 9, 13, 17, 21, 25, 29};
   int array16[ARRAY_SIZE] = {2, 6, 10, 14, 18, 22, 26, 30};

   printf("===== Test array1 + array2 =====\n");
   testArraySum(array1, array2, array12);
   printf("===== Test array1 + array3 =====\n");
   testArraySum(array1, array3, array13);
   printf("===== Test array1 + array4 =====\n");
   testArraySum(array1, array4, array14);
   printf("===== Test array1 + array5 =====\n");
   testArraySum(array1, array5, array15);
   printf("===== Test array1 + array6 =====\n");
   testArraySum(array1, array6, array16);
}



void testArraySum(int arr1[], int arr2[], int expected[])
{
   int i;
   int result[ARRAY_SIZE];

   arraySum(arr1, arr2, ARRAY_SIZE, result);

   for (i = 0; i < ARRAY_SIZE; ++i)
   {
     if (result[i] != expected[i])
     {
       printf("FAIL at index%d\n", i);
       printf("\texpected:  %d\n", expected[i]);
       printf("\tactual:  %d\n", result[i]);
     }
     else
     {
       printf("PASS at index%d\n", i);
     }
   }
}



void arraySum(int a1[], int a2[], int size, int sum[])
{
   int i;

   for (i = 0; i < size; ++i)
     sum[i] = a1[i] + a2[i];
}


