/*************************************************************
**
**  Mason Jensen
**  11/15/2006
**
**  Write the function 
**  void myStrNCopy(char dest[], char source[], int count) which 
**  copies the string in source to the string in destination.  
**  Copy at most count characters from source to dest.  (This is 
**  your version of the C standard library function strncpy().)  
**  Write a main program which exercises myStrNCopy().  
**
**
**
**************************************************************/

#include <stdio.h>

void myStrNCopy(char[], char[], int);

void main(void)
{
   char str1[7];
   char str2[7] = "foobar";
   char str3[9] = "some val";

   printf("str1:  %s\n", str1);
   printf("str2:  %s\n", str2);
   printf("str3:  %s\n", str3);

   myStrNCopy(str1, str2, 7);
   myStrNCopy(str3, str2, 3);

   printf("\nstr1:  %s\n", str1);
   printf("str2:  %s\n", str2);
   printf("str3:  %s\n", str3);

}

void myStrNCopy(char dest[], char source[], int count)
{
   int i;

   for (i = 0; i < count; ++i)
      dest[i] = source[i];
}


